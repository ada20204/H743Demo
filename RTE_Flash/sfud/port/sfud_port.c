/*
 * This file is part of the Serial Flash Universal Driver Library.
 *
 * Copyright (c) 2016-2018, Armink, <armink.ztl@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * 'Software'), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Function: Portable interface for each platform.
 * Created on: 2016-04-23
 */

#include <sfud.h>
#include <stdarg.h>

#ifndef FLASH_CMSIS_SPI
#define FFLASH_CMSIS_SPI 0
#endif

#ifndef FLASH_HAL_BASIC
#define FLASH_HAL_BASIC 1
#endif

#define NOR_FLASH_DRIVER FLASH_HAL_BASIC


#if NOR_FLASH_DRIVER
    #include "main.h"
    #define NOR_FLASH_CS_GPIO GPIOA
    #define NOR_FLASH_CS_PIN GPIO_PIN_4
    #define Select_Slave() HAL_GPIO_WritePin(NOR_FLASH_CS_GPIO, NOR_FLASH_CS_PIN, GPIO_PIN_RESET);
    #define Deselect_Slave() HAL_GPIO_WritePin(NOR_FLASH_CS_GPIO, NOR_FLASH_CS_PIN, GPIO_PIN_SET);
    extern SPI_HandleTypeDef hspi1;
    static SPI_HandleTypeDef *flash_spi = &hspi1;
#else
    #include "Driver_SPI.h" // ::CMSIS Driver:SPI
    extern ARM_DRIVER_SPI Driver_SPI1;
    ARM_DRIVER_SPI *SPIdrv = &Driver_SPI1;
    #ifndef DRIVER_SPI_BUS_SPEED
        #define DRIVER_SPI_BUS_SPEED 125 * 100 * 1000 /* Default SPI bus speed */
    #endif
#endif

static uint8_t bNorFlashLock = 0;

static char log_buf[256];

void sfud_log_debug(const char *file, const long line, const char *format, ...);

/**
 * SPI write data then read data
 */
static sfud_err spi_write_read(const sfud_spi *spi, const uint8_t *write_buf, size_t write_size, uint8_t *read_buf,
                               size_t read_size)
{
    sfud_err result = SFUD_SUCCESS;
    uint8_t send_data, read_data;
    int32_t status;

#if NOR_FLASH_DRIVER
    Select_Slave();
    if (write_buf != NULL && write_size > 0)
        HAL_SPI_Transmit(flash_spi, write_buf, write_size, 100);
    if (read_buf != NULL && read_size > 0)
        HAL_SPI_Receive(flash_spi, read_buf, read_size, 100);
    Deselect_Slave();
#else
    SPIdrv->Control(ARM_SPI_CONTROL_SS, ARM_SPI_SS_ACTIVE);
    status = SPIdrv->Send(write_buf, write_size);
    if (status == ARM_DRIVER_OK)
    {
        while (SPIdrv->GetDataCount() != write_size)
            ;
    }
    SPIdrv->Receive(read_buf, read_size);
    if (status == ARM_DRIVER_OK)
    {
        while (SPIdrv->GetDataCount() != read_size)
            ;
    }
    SPIdrv->Control(ARM_SPI_CONTROL_SS, ARM_SPI_SS_INACTIVE);
#endif

    return result;
}

#ifdef SFUD_USING_QSPI
/**
 * read flash data by QSPI
 */
static sfud_err qspi_read(const struct __sfud_spi *spi, uint32_t addr, sfud_qspi_read_cmd_format *qspi_read_cmd_format,
                          uint8_t *read_buf, size_t read_size)
{
    sfud_err result = SFUD_SUCCESS;

    /**
     * add your qspi read flash data code
     */

    return result;
}
#endif /* SFUD_USING_QSPI */

/**
 * lock spi bus
 */
static void spi_lock(const struct __sfud_spi *spi)
{
    /**
     * add your spi lock code
     */
    bNorFlashLock = 1;
    return;
}

/**
 * ublock spi bus
 */
static void spi_unlock(const struct __sfud_spi *spi)
{
    /**
     * add your spi unlock code
     */
    bNorFlashLock = 0;
    return;
}

sfud_err sfud_spi_port_init(sfud_flash *flash)
{
    sfud_err result = SFUD_SUCCESS;

    /**
     * add your port spi bus and device object initialize code like this:
     * 1. rcc initialize
     * 2. gpio initialize
     * 3. spi device initialize
     * 4. flash->spi and flash->retry item initialize
     *    flash->spi.wr = spi_write_read; //Required
     *    flash->spi.qspi_read = qspi_read; //Required when QSPI mode enable
     *    flash->spi.lock = spi_lock;
     *    flash->spi.unlock = spi_unlock;
     *    flash->spi.user_data = &spix;
     *    flash->retry.delay = null;
     *    flash->retry.times = 10000; //Required
     */

#if NOR_FLASH_DRIVER
    if (flash_spi->Init.NSS != SPI_NSS_SOFT)
    {
        flash_spi->Init.NSS = SPI_NSS_SOFT;
        HAL_SPI_DeInit(flash_spi);
        HAL_SPI_Init(flash_spi);
    }
    Deselect_Slave();
#else

    /* Initialize the SPI driver */
    SPIdrv->Initialize(NULL);
    /* Power up the SPI peripheral */
    SPIdrv->PowerControl(ARM_POWER_FULL);
    /* Configure the SPI to Master, 8-bit mode @10000 kBits/sec */
    SPIdrv->Control(ARM_SPI_MODE_MASTER | ARM_SPI_CPOL0_CPHA0 | ARM_SPI_MSB_LSB | ARM_SPI_SS_MASTER_SW | ARM_SPI_DATA_BITS(8), DRIVER_SPI_BUS_SPEED);

    /* SS line = INACTIVE = HIGH */
    SPIdrv->Control(ARM_SPI_CONTROL_SS, ARM_SPI_SS_INACTIVE);
#endif

    flash->spi.wr = spi_write_read; // Required
    flash->spi.lock = spi_lock;
    flash->spi.unlock = spi_unlock;
    flash->spi.user_data = NULL;
    flash->retry.delay = NULL;
    flash->retry.times = 10000; // Required

    return result;
}

/**
 * This function is print debug info.
 *
 * @param file the file which has call this function
 * @param line the line number which has call this function
 * @param format output format
 * @param ... args
 */
void sfud_log_debug(const char *file, const long line, const char *format, ...)
{
    va_list args;

    /* args point to the first variable parameter */
    va_start(args, format);
    printf("[SFUD](%s:%ld) ", file, line);
    /* must use vprintf to print */
    vsnprintf(log_buf, sizeof(log_buf), format, args);
    printf("%s\n", log_buf);
    va_end(args);
}

/**
 * This function is print routine info.
 *
 * @param format output format
 * @param ... args
 */
void sfud_log_info(const char *format, ...)
{
    va_list args;

    /* args point to the first variable parameter */
    va_start(args, format);
    printf("[SFUD]");
    /* must use vprintf to print */
    vsnprintf(log_buf, sizeof(log_buf), format, args);
    printf("%s\n", log_buf);
    va_end(args);
}
