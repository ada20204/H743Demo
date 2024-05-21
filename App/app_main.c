#include "main.h"
#include "cmsis_os2.h"
#include "stdio.h"
#include "rl_usb.h"
#include "rl_net.h" // Keil.MDK-Pro::Network:CORE
#include "rl_fs.h"  // Keil.MDK-Pro::File System:CORE

#include "Driver_Flash.h"
#include "Driver_Spi.h"

extern ARM_DRIVER_FLASH Driver_Flash0;

char test[] = "------------------------------------------------------------------\r\n";
#define FLASH_TEST_ADDR 0x10000
uint8_t read_buf[1000] = {0};

void app_init(void)
{
	ARM_FLASH_INFO *flashInfo = NULL;

	Driver_Flash0.Initialize(NULL);
	Driver_Flash0.PowerControl(ARM_POWER_FULL);
	flashInfo = Driver_Flash0.GetInfo();

	Driver_Flash0.ReadData(FLASH_TEST_ADDR, read_buf, sizeof(read_buf));

	Driver_Flash0.EraseSector(FLASH_TEST_ADDR);
	Driver_Flash0.ReadData(FLASH_TEST_ADDR, read_buf, sizeof(read_buf));

	Driver_Flash0.ProgramData(FLASH_TEST_ADDR, test, sizeof(test));
	Driver_Flash0.ReadData(FLASH_TEST_ADDR, read_buf, sizeof(read_buf));

	Driver_Flash0.EraseSector(FLASH_TEST_ADDR);
	Driver_Flash0.ReadData(FLASH_TEST_ADDR, read_buf, sizeof(read_buf));

	Driver_Flash0.Uninitialize();
}


/*
  Application thread: Initialize and start the Application
*/
void app_main(void *argument)
{
	/* Application code */
  app_init();


	USBD_Initialize(0); // USB Device 0 Initialization
	USBD_Connect(0);	  // USB Device 0 Connect

	if (finit("F0:") == fsOK)
	{
		fmount("F0:");
	}

	osDelay(500);
	netInitialize();
	osDelay(500);

	extern void mongoose_app_main (void *args);
	mongoose_app_main(NULL);

	while (1)
	{
		extern void DemoFlashFS(void);
		DemoFlashFS();
	}
}
