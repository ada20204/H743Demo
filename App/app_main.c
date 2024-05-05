#include "main.h"
#include "cmsis_os2.h"
#include "stdio.h"
#include "rl_usb.h"
#include "rl_net.h" // Keil.MDK-Pro::Network:CORE
#include "rl_fs.h"  // Keil.MDK-Pro::File System:CORE

#include "Driver_Flash.h"
#include "Driver_Spi.h"

extern ARM_DRIVER_FLASH Driver_Flash0;
extern ARM_DRIVER_SPI Driver_SPI1;

char test[] = "------------------------------------------------------------------\r\n";
uint8_t read_buf[1000] = {0};

void app_init(void)
{
	uint8_t send[4] = {0x9F, 0xA5, 0xA5, 0xA5};
	uint8_t recive[4] = {0};
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	extern SPI_HandleTypeDef hspi1;
	HAL_SPI_TransmitReceive(&hspi1, send, recive, sizeof(send), 1000);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);

	/* Initialize the SPI driver */
	Driver_SPI1.Initialize(NULL);
	/* Power up the SPI peripheral */
	Driver_SPI1.PowerControl(ARM_POWER_FULL);
	/* Configure the SPI to Master, 8-bit mode @10000 kBits/sec */
	Driver_SPI1.Control(ARM_SPI_MODE_MASTER | ARM_SPI_CPOL1_CPHA1 | ARM_SPI_MSB_LSB | ARM_SPI_SS_MASTER_SW | ARM_SPI_DATA_BITS(8), 25000000);
	/* SS line = INACTIVE = HIGH */
	Driver_SPI1.Control(ARM_SPI_CONTROL_SS, ARM_SPI_SS_INACTIVE);

	for (int i = 0; i < sizeof(recive); ) { recive[i++] = 0;}

	/* SS line = ACTIVE = LOW */
	Driver_SPI1.Control(ARM_SPI_CONTROL_SS, ARM_SPI_SS_ACTIVE);
	Driver_SPI1.Transfer(send, recive, 4);
	/* SS line = INACTIVE = HIGH */
	Driver_SPI1.Control(ARM_SPI_CONTROL_SS, ARM_SPI_SS_INACTIVE);

	/* Uninitialize the SPI driver */
	Driver_SPI1.Uninitialize();

	ARM_FLASH_INFO *flashInfo = NULL;

	Driver_Flash0.Initialize(NULL);
	Driver_Flash0.PowerControl(ARM_POWER_FULL);
	flashInfo = Driver_Flash0.GetInfo();

	Driver_Flash0.ProgramData(0x1000, test, sizeof(test));
	Driver_Flash0.ReadData(0x1000, read_buf, sizeof(read_buf));
	Driver_Flash0.EraseSector(0x1000);
	Driver_Flash0.ReadData(0x1000, read_buf, sizeof(read_buf));
	
	Driver_Flash0.Uninitialize();
}


/*
  Application thread: Initialize and start the Application
*/
void app_main(void *argument)
{
	/* Application code */

	USBD_Initialize(0); // USB Device 0 Initialization
	USBD_Connect(0);	  // USB Device 0 Connect

	if (finit("M0:") == fsOK)
	{
		fmount("M0:");
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