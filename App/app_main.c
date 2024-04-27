#include "main.h"
#include "cmsis_os2.h"
#include "stdio.h"
#include "rl_usb.h"
#include "rl_net.h"
#include "Driver_Flash.h"

char test[] = "------------------------------------------------------------------\r\n";
uint8_t read_buf[1000] = {0};

extern ARM_DRIVER_FLASH Driver_Flash0;
/*
  Application thread: Initialize and start the Application
*/
void app_main(void *argument)
{
	USBD_Initialize(0); // USB Device 0 Initialization
	USBD_Connect(0);	// USB Device 0 Connect

	osDelay(500);
	netInitialize();
	osDelay(500);

	ARM_FLASH_INFO *flashInfo = NULL;

	Driver_Flash0.Initialize(NULL);
	Driver_Flash0.PowerControl(ARM_POWER_FULL);
	flashInfo = Driver_Flash0.GetInfo();

	Driver_Flash0.ProgramData(0x1000, test, sizeof(test));

	Driver_Flash0.ReadData(0x1000, read_buf, sizeof(read_buf));

	Driver_Flash0.EraseSector(0x1000);

	Driver_Flash0.ReadData(0x1000, read_buf, sizeof(read_buf));

	while (1)
	{
		// Application code

		// HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		// HAL_Delay(1000);
		// printf("hello world\n");

		extern void DemoFlashFS(void);
		DemoFlashFS();
	}
}