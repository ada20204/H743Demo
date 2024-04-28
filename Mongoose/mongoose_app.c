#include "main.h"
#include "net.h"
#include "mongoose.h"
#include "cmsis_os2.h"

#define BLINK_PERIOD_MS 1000 // LED blinking period in millis

osThreadId_t s_am;

#if 1
extern RNG_HandleTypeDef hrng;
void mg_random(void *buf, size_t len) {  // Use on-board RNG
  for (size_t n = 0; n < len; n += sizeof(uint32_t)) {
    uint32_t r = 0;
		HAL_RNG_GenerateRandomNumber(&hrng, &r);
    memcpy((char *) buf + n, &r, n + sizeof(r) > len ? len - n : sizeof(r));
  }
}
#elif 0
void mg_random(void *buf, size_t len)
{ // Use on-board RNG
  for (size_t n = 0; n < len; n += sizeof(uint32_t))
  {
    uint32_t r = rng_read();
    memcpy((char *)buf + n, &r, n + sizeof(r) > len ? len - n : sizeof(r));
  }
}
#endif

static void blinker(void *args) {
  for (;;) {
    HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_3);     // Blink On-board blue LED
    osDelay((osKernelGetTickFreq() * BLINK_PERIOD_MS) / 1000U);
  }
  (void) args;
}

static void server(void *args)
{
  struct mg_mgr mgr;       // Initialise Mongoose event manager
  mg_mgr_init(&mgr);       // and attach it to the interface
  mg_log_set(MG_LL_DEBUG); // Set log level

  MG_INFO(("Initialising application..."));
  web_init(&mgr);

  MG_INFO(("Starting event loop"));
  for (;;)
    mg_mgr_poll(&mgr, 1000); // Infinite event loop
  (void)args;
}

__NO_RETURN void mongoose_app_main (void *args) {
  uint8_t ipaddr[NET_ADDR_IP4_LEN];
  char ip[40];
	
	const osThreadAttr_t blinker_attr = {
    .stack_size = 128,
		.name = "blinker"
  };

	osThreadNew(blinker, NULL, &blinker_attr);
  // netInitialize();

	MG_INFO(("Waiting for IP..."));
//  osThreadFlagsWait (1<<0, osFlagsWaitAny, osWaitForever); // wait for DHCP
//  osThreadFlagsClear(1<<0);
  netIF_GetOption (NET_IF_CLASS_ETH, netIF_OptionIP4_Address, ipaddr, sizeof(ipaddr));
  netIP_ntoa (NET_ADDR_IP4, ipaddr, ip, sizeof(ip));
  MG_INFO(("READY, IP: %s", ip));

  const osThreadAttr_t server_attr = {
    .stack_size = 8192,                            // Create the server thread with a stack size of 8KB
		.name = "mongoose_server"
  };
  osThreadNew(server, NULL, &server_attr);
  osThreadTerminate(osThreadGetId());
  for(;;);
  (void)args;
}

// see rl_net_ds.h
void netDHCP_Notify (uint32_t if_num, uint8_t option, const uint8_t *val, uint32_t len) {
  if (option == NET_DHCP_OPTION_IP_ADDRESS) osThreadFlagsSet(s_am, 1<<0);
  (void)if_num, (void)val, (void)len;
}
