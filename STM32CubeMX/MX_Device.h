/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 28/04/2024 00:34:34
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            64000000
#define MX_HSE_VALUE                            25000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLDSIFreq_Value                     500000000
#define MX_SYSCLKFreq_VALUE                     480000000
#define MX_HCLKFreq_Value                       240000000
#define MX_CortexFreq_Value                     480000000
#define MX_APB1Freq_Value                       120000000
#define MX_APB2Freq_Value                       120000000
#define MX_CECFreq_Value                        32000
#define MX_RTCFreq_Value                        32768
#define MX_USBFreq_Value                        48000000
#define MX_WatchDogFreq_Value                   32000
#define MX_DSIFreq_Value                        96000000
#define MX_DSIPHYCLKFreq_Value                  96000000
#define MX_DSITXEscFreq_Value                   20000000
#define MX_SPDIFRXFreq_Value                    240000000
#define MX_MCO1PinFreq_Value                    25000000
#define MX_MCO2PinFreq_Value                    480000000

/*-------------------------------- BDMA       --------------------------------*/

#define MX_BDMA                                 1

/* NVIC Configuration */

/* NVIC BDMA_Channel1_IRQn */
#define MX_BDMA_Channel1_IRQn_interruptPremptionPriority 0
#define MX_BDMA_Channel1_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_4
#define MX_BDMA_Channel1_IRQn_Subriority        0

/* NVIC BDMA_Channel0_IRQn */
#define MX_BDMA_Channel0_IRQn_interruptPremptionPriority 0
#define MX_BDMA_Channel0_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_4
#define MX_BDMA_Channel0_IRQn_Subriority        0

/*-------------------------------- CORTEX_M7  --------------------------------*/

#define MX_CORTEX_M7                            1

/* GPIO Configuration */

/*-------------------------------- DEBUG      --------------------------------*/

#define MX_DEBUG                                1

/* GPIO Configuration */

/* Pin PA14 (JTCK/SWCLK) */
#define MX_DEBUG_JTCK_SWCLK_Pin                 PA14_JTCK_SWCLK

/* Pin PA13 (JTMS/SWDIO) */
#define MX_DEBUG_JTMS_SWDIO_Pin                 PA13_JTMS_SWDIO

/*-------------------------------- ETH        --------------------------------*/

#define MX_ETH                                  1

/* GPIO Configuration */

/* Pin PA1 */
#define MX_ETH_REF_CLK_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_REF_CLK_Pin                      PA1
#define MX_ETH_REF_CLK_GPIOx                    GPIOA
#define MX_ETH_REF_CLK_GPIO_PuPd                GPIO_NOPULL
#define MX_ETH_REF_CLK_GPIO_Pin                 GPIO_PIN_1
#define MX_ETH_REF_CLK_GPIO_AF                  GPIO_AF11_ETH
#define MX_ETH_REF_CLK_GPIO_Mode                GPIO_MODE_AF_PP

/* Pin PA7 */
#define MX_ETH_CRS_DV_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_CRS_DV_Pin                       PA7
#define MX_ETH_CRS_DV_GPIOx                     GPIOA
#define MX_ETH_CRS_DV_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_CRS_DV_GPIO_Pin                  GPIO_PIN_7
#define MX_ETH_CRS_DV_GPIO_AF                   GPIO_AF11_ETH
#define MX_ETH_CRS_DV_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PC4 */
#define MX_ETH_RXD0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_RXD0_Pin                         PC4
#define MX_ETH_RXD0_GPIOx                       GPIOC
#define MX_ETH_RXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Pin                    GPIO_PIN_4
#define MX_ETH_RXD0_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_RXD0_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PC5 */
#define MX_ETH_RXD1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_RXD1_Pin                         PC5
#define MX_ETH_RXD1_GPIOx                       GPIOC
#define MX_ETH_RXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Pin                    GPIO_PIN_5
#define MX_ETH_RXD1_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_RXD1_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PB11 */
#define MX_ETH_TX_EN_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TX_EN_Pin                        PB11
#define MX_ETH_TX_EN_GPIOx                      GPIOB
#define MX_ETH_TX_EN_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Pin                   GPIO_PIN_11
#define MX_ETH_TX_EN_GPIO_AF                    GPIO_AF11_ETH
#define MX_ETH_TX_EN_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA2 */
#define MX_ETH_MDIO_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_MDIO_Pin                         PA2
#define MX_ETH_MDIO_GPIOx                       GPIOA
#define MX_ETH_MDIO_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_MDIO_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_MDIO_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PB13 */
#define MX_ETH_TXD1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TXD1_Pin                         PB13
#define MX_ETH_TXD1_GPIOx                       GPIOB
#define MX_ETH_TXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD1_GPIO_Pin                    GPIO_PIN_13
#define MX_ETH_TXD1_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_TXD1_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PB12 */
#define MX_ETH_TXD0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TXD0_Pin                         PB12
#define MX_ETH_TXD0_GPIOx                       GPIOB
#define MX_ETH_TXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD0_GPIO_Pin                    GPIO_PIN_12
#define MX_ETH_TXD0_GPIO_AF                     GPIO_AF11_ETH
#define MX_ETH_TXD0_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PC1 */
#define MX_ETH_MDC_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_MDC_Pin                          PC1
#define MX_ETH_MDC_GPIOx                        GPIOC
#define MX_ETH_MDC_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_MDC_GPIO_Pin                     GPIO_PIN_1
#define MX_ETH_MDC_GPIO_AF                      GPIO_AF11_ETH
#define MX_ETH_MDC_GPIO_Mode                    GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC ETH_IRQn */
#define MX_ETH_IRQn_interruptPremptionPriority  0
#define MX_ETH_IRQn_PriorityGroup               NVIC_PRIORITYGROUP_4
#define MX_ETH_IRQn_Subriority                  0

/* NVIC ETH_WKUP_IRQn */
#define MX_ETH_WKUP_IRQn_interruptPremptionPriority 0
#define MX_ETH_WKUP_IRQn_PriorityGroup          NVIC_PRIORITYGROUP_4
#define MX_ETH_WKUP_IRQn_Subriority             0

/*-------------------------------- FDCAN1     --------------------------------*/

#define MX_FDCAN1                               1

/* GPIO Configuration */

/* Pin PD1 */
#define MX_FDCAN1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_FDCAN1_TX_Pin                        PD1
#define MX_FDCAN1_TX_GPIOx                      GPIOD
#define MX_FDCAN1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_FDCAN1_TX_GPIO_Pin                   GPIO_PIN_1
#define MX_FDCAN1_TX_GPIO_AF                    GPIO_AF9_FDCAN1
#define MX_FDCAN1_TX_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PD0 */
#define MX_FDCAN1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_FDCAN1_RX_Pin                        PD0
#define MX_FDCAN1_RX_GPIOx                      GPIOD
#define MX_FDCAN1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_FDCAN1_RX_GPIO_Pin                   GPIO_PIN_0
#define MX_FDCAN1_RX_GPIO_AF                    GPIO_AF9_FDCAN1
#define MX_FDCAN1_RX_GPIO_Mode                  GPIO_MODE_AF_PP

/*-------------------------------- LPUART1    --------------------------------*/

#define MX_LPUART1                              1

/* GPIO Configuration */

/* Pin PA10 */
#define MX_LPUART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_RX_Pin                       PA10
#define MX_LPUART1_RX_GPIOx                     GPIOA
#define MX_LPUART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Pin                  GPIO_PIN_10
#define MX_LPUART1_RX_GPIO_AF                   GPIO_AF3_LPUART
#define MX_LPUART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PA9 */
#define MX_LPUART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_TX_Pin                       PA9
#define MX_LPUART1_TX_GPIOx                     GPIOA
#define MX_LPUART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Pin                  GPIO_PIN_9
#define MX_LPUART1_TX_GPIO_AF                   GPIO_AF3_LPUART
#define MX_LPUART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA LPUART1_RX */
#define MX_LPUART1_RX_DMA_Instance              BDMA_Channel1
#define MX_LPUART1_RX_DMA_Priority              DMA_PRIORITY_LOW
#define MX_LPUART1_RX_DMA_MemDataAlignment      DMA_MDATAALIGN_BYTE
#define MX_LPUART1_RX_DMA_Mode                  DMA_NORMAL
#define MX_LPUART1_RX_DMA_SyncRequestNumber     1
#define MX_LPUART1_RX_DMA_Request               BDMA_REQUEST_LPUART1_RX
#define MX_LPUART1_RX_DMA_SyncPolarity          HAL_DMAMUX_SYNC_NO_EVENT
#define MX_LPUART1_RX_DMA_Direction             DMA_PERIPH_TO_MEMORY
#define MX_LPUART1_RX_DMA_SignalID              NONE
#define MX_LPUART1_RX_DMA_MemInc                DMA_MINC_ENABLE
#define MX_LPUART1_RX_DMA_IpInstance
#define MX_LPUART1_RX_DMA_RequestNumber         1
#define MX_LPUART1_RX_DMA_EventEnable           DISABLE
#define MX_LPUART1_RX_DMA_SyncEnable            DISABLE
#define MX_LPUART1_RX_DMA_DMA_Handle
#define MX_LPUART1_RX_DMA_PeriphDataAlignment   DMA_PDATAALIGN_BYTE
#define MX_LPUART1_RX_DMA_Polarity              HAL_DMAMUX_REQ_GEN_RISING
#define MX_LPUART1_RX_DMA_SyncSignalID          NONE
#define MX_LPUART1_RX_DMA_PeriphInc             DMA_PINC_DISABLE

/* DMA LPUART1_TX */
#define MX_LPUART1_TX_DMA_Instance              BDMA_Channel0
#define MX_LPUART1_TX_DMA_Priority              DMA_PRIORITY_LOW
#define MX_LPUART1_TX_DMA_MemDataAlignment      DMA_MDATAALIGN_BYTE
#define MX_LPUART1_TX_DMA_Mode                  DMA_NORMAL
#define MX_LPUART1_TX_DMA_SyncRequestNumber     1
#define MX_LPUART1_TX_DMA_Request               BDMA_REQUEST_LPUART1_TX
#define MX_LPUART1_TX_DMA_SyncPolarity          HAL_DMAMUX_SYNC_NO_EVENT
#define MX_LPUART1_TX_DMA_Direction             DMA_MEMORY_TO_PERIPH
#define MX_LPUART1_TX_DMA_SignalID              NONE
#define MX_LPUART1_TX_DMA_MemInc                DMA_MINC_ENABLE
#define MX_LPUART1_TX_DMA_IpInstance
#define MX_LPUART1_TX_DMA_RequestNumber         1
#define MX_LPUART1_TX_DMA_EventEnable           DISABLE
#define MX_LPUART1_TX_DMA_SyncEnable            DISABLE
#define MX_LPUART1_TX_DMA_DMA_Handle
#define MX_LPUART1_TX_DMA_PeriphDataAlignment   DMA_PDATAALIGN_BYTE
#define MX_LPUART1_TX_DMA_Polarity              HAL_DMAMUX_REQ_GEN_RISING
#define MX_LPUART1_TX_DMA_SyncSignalID          NONE
#define MX_LPUART1_TX_DMA_PeriphInc             DMA_PINC_DISABLE

/* NVIC Configuration */

/* NVIC LPUART1_IRQn */
#define MX_LPUART1_IRQn_interruptPremptionPriority 0
#define MX_LPUART1_IRQn_PriorityGroup           NVIC_PRIORITYGROUP_4
#define MX_LPUART1_IRQn_Subriority              0

/*-------------------------------- RNG        --------------------------------*/

#define MX_RNG                                  1

/* GPIO Configuration */

/*-------------------------------- RTC        --------------------------------*/

#define MX_RTC                                  1

/* GPIO Configuration */

/*-------------------------------- SDMMC1     --------------------------------*/

#define MX_SDMMC1                               1

/* GPIO Configuration */

/* Pin PC8 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDIO1
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PD2 */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDIO1
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PC9 */
#define MX_SDMMC1_D1_Pin                        PC9
#define MX_SDMMC1_D1_GPIOx                      GPIOC
#define MX_SDMMC1_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D1_GPIO_AF                    GPIO_AF12_SDIO1
#define MX_SDMMC1_D1_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC10 */
#define MX_SDMMC1_D2_Pin                        PC10
#define MX_SDMMC1_D2_GPIOx                      GPIOC
#define MX_SDMMC1_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D2_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC1_D2_GPIO_AF                    GPIO_AF12_SDIO1
#define MX_SDMMC1_D2_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC11 */
#define MX_SDMMC1_D3_Pin                        PC11
#define MX_SDMMC1_D3_GPIOx                      GPIOC
#define MX_SDMMC1_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D3_GPIO_Pin                   GPIO_PIN_11
#define MX_SDMMC1_D3_GPIO_AF                    GPIO_AF12_SDIO1
#define MX_SDMMC1_D3_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC12 */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDIO1
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC SDMMC1_IRQn */
#define MX_SDMMC1_IRQn_interruptPremptionPriority 0
#define MX_SDMMC1_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_SDMMC1_IRQn_Subriority               0

/*-------------------------------- SPI1       --------------------------------*/

#define MX_SPI1                                 1

/* GPIO Configuration */

/* Pin PA4 */
#define MX_SPI1_NSS_GPIO_Speed                  GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_NSS_Pin                         PA4
#define MX_SPI1_NSS_GPIOx                       GPIOA
#define MX_SPI1_NSS_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_NSS_GPIO_Pin                    GPIO_PIN_4
#define MX_SPI1_NSS_GPIO_AF                     GPIO_AF5_SPI1
#define MX_SPI1_NSS_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PA6 */
#define MX_SPI1_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_MISO_Pin                        PA6
#define MX_SPI1_MISO_GPIOx                      GPIOA
#define MX_SPI1_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI1_MISO_GPIO_AF                    GPIO_AF5_SPI1
#define MX_SPI1_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PB5 */
#define MX_SPI1_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_MOSI_Pin                        PB5
#define MX_SPI1_MOSI_GPIOx                      GPIOB
#define MX_SPI1_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Pin                   GPIO_PIN_5
#define MX_SPI1_MOSI_GPIO_AF                    GPIO_AF5_SPI1
#define MX_SPI1_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA5 */
#define MX_SPI1_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_SCK_Pin                         PA5
#define MX_SPI1_SCK_GPIOx                       GPIOA
#define MX_SPI1_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Pin                    GPIO_PIN_5
#define MX_SPI1_SCK_GPIO_AF                     GPIO_AF5_SPI1
#define MX_SPI1_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC SPI1_IRQn */
#define MX_SPI1_IRQn_interruptPremptionPriority 0
#define MX_SPI1_IRQn_PriorityGroup              NVIC_PRIORITYGROUP_4
#define MX_SPI1_IRQn_Subriority                 0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- USB_OTG_FS --------------------------------*/

#define MX_USB_OTG_FS                           1

#define MX_USB_OTG_FS_DEVICE                    1

/* GPIO Configuration */

/* Pin PA11 */
#define MX_USB_OTG_FS_DM_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DM_Pin                    PA11
#define MX_USB_OTG_FS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIO_AF                GPIO_AF10_OTG1_FS
#define MX_USB_OTG_FS_DM_GPIO_Mode              GPIO_MODE_AF_PP

/* Pin PA12 */
#define MX_USB_OTG_FS_DP_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DP_Pin                    PA12
#define MX_USB_OTG_FS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIO_AF                GPIO_AF10_OTG1_FS
#define MX_USB_OTG_FS_DP_GPIO_Mode              GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC OTG_FS_EP1_OUT_IRQn */
#define MX_OTG_FS_EP1_OUT_IRQn_interruptPremptionPriority 0
#define MX_OTG_FS_EP1_OUT_IRQn_PriorityGroup    NVIC_PRIORITYGROUP_4
#define MX_OTG_FS_EP1_OUT_IRQn_Subriority       0

/* NVIC OTG_FS_EP1_IN_IRQn */
#define MX_OTG_FS_EP1_IN_IRQn_interruptPremptionPriority 0
#define MX_OTG_FS_EP1_IN_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_4
#define MX_OTG_FS_EP1_IN_IRQn_Subriority        0

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PC13 */
#define MX_PC13_Pin                             PC13
#define MX_PC13_GPIOx                           GPIOC
#define MX_PC13_GPIO_PuPd                       GPIO_NOPULL
#define MX_KEY2                                 PC13
#define MX_PC13_GPIO_Pin                        GPIO_PIN_13
#define MX_PC13_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PC3_C */
#define MX_PC3_C_GPIO_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_PC3_C_Pin                            PC3_C
#define MX_PC3_C_GPIOx                          GPIOC
#define MX_PC3_C_PinState                       GPIO_PIN_SET
#define MX_PC3_C_GPIO_PuPd                      GPIO_NOPULL
#define MX_LED                                  PC3_C
#define MX_PC3_C_GPIO_Pin                       GPIO_PIN_3
#define MX_PC3_C_GPIO_ModeDefaultOutputPP       GPIO_MODE_OUTPUT_PP

/* Pin PC0 */
#define MX_PC0_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC0_Pin                              PC0
#define MX_PC0_GPIOx                            GPIOC
#define MX_PC0_PinState                         GPIO_PIN_SET
#define MX_PC0_GPIO_PuPd                        GPIO_NOPULL
#define MX_ETH_RST                              PC0
#define MX_PC0_GPIO_Pin                         GPIO_PIN_0
#define MX_PC0_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PA0 */
#define MX_PA0_Pin                              PA0
#define MX_PA0_GPIOx                            GPIOA
#define MX_PA0_GPIO_PuPd                        GPIO_NOPULL
#define MX_KEY1                                 PA0
#define MX_PA0_GPIO_Pin                         GPIO_PIN_0
#define MX_PA0_GPIO_Mode                        GPIO_MODE_INPUT

#endif  /* __MX_DEVICE_H */

