
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'h743demo' 
 * Target:  'Target 1' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "stm32h7xx.h"

/* ARM.FreeRTOS::RTOS:Config:CMSIS RTOS2:10.5.1 */
#define RTE_RTOS_FreeRTOS_CONFIG_RTOS2  /* RTOS FreeRTOS Config for CMSIS RTOS2 API */
/* ARM.FreeRTOS::RTOS:Core:Cortex-M:10.5.1 */
#define RTE_RTOS_FreeRTOS_CORE          /* RTOS FreeRTOS Core */
/* ARM.FreeRTOS::RTOS:Coroutines:10.5.1 */
#define RTE_RTOS_FreeRTOS_COROUTINE     /* RTOS FreeRTOS Co-routines */
/* ARM.FreeRTOS::RTOS:Event Groups:10.5.1 */
#define RTE_RTOS_FreeRTOS_EVENTGROUPS   /* RTOS FreeRTOS Event Groups */
/* ARM.FreeRTOS::RTOS:Heap:Heap_4:10.5.1 */
#define RTE_RTOS_FreeRTOS_HEAP_4        /* RTOS FreeRTOS Heap 4 */
/* ARM.FreeRTOS::RTOS:Message Buffer:10.5.1 */
#define RTE_RTOS_FreeRTOS_MESSAGE_BUFFER /* RTOS FreeRTOS Message Buffers */
/* ARM.FreeRTOS::RTOS:Stream Buffer:10.5.1 */
#define RTE_RTOS_FreeRTOS_STREAM_BUFFER /* RTOS FreeRTOS Stream Buffers */
/* ARM.FreeRTOS::RTOS:Timers:10.5.1 */
#define RTE_RTOS_FreeRTOS_TIMERS        /* RTOS FreeRTOS Timers */
/* ARM::CMSIS-Compiler:STDOUT:Custom:1.0.0 */
#define RTE_CMSIS_Compiler_STDOUT                /* CMSIS-Compiler STDOUT */
        #define RTE_CMSIS_Compiler_STDOUT_Custom         /* CMSIS-Compiler STDOUT: Custom */
/* ARM::CMSIS-View:Event Recorder:DAP:1.5.3 */
#define RTE_CMSIS_View_EventRecorder
        #define RTE_CMSIS_View_EventRecorder_DAP
/* ARM::CMSIS:RTOS2:FreeRTOS:Cortex-M:10.5.1 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_FreeRTOS        /* CMSIS-RTOS2 FreeRTOS */
/* Keil.MDK-Plus::File System:CORE:SFN Debug:6.16.6 */
#define RTE_FileSystem_Core             /* File System Core */
          #define RTE_FileSystem_SFN              /* File System without Long Filename support */
          #define RTE_FileSystem_Debug            /* File System Debug Version */
/* Keil.MDK-Plus::File System:Drive:Memory Card:6.16.6 */
#define RTE_FileSystem_Drive_MC_0       /* File System Memory Card Drive 0 */

/* Keil.MDK-Plus::File System:Drive:NOR:6.16.6 */
#define RTE_FileSystem_Drive_NOR_0      /* File System NOR Flash Drive 0 */

/* Keil.MDK-Plus::Network:CORE:IPv4 Debug:7.19.0 */
#define RTE_Network_Core                /* Network Core */
          #define RTE_Network_IPv4                /* Network IPv4 Stack */
          #define RTE_Network_Debug               /* Network Debug Version */
/* Keil.MDK-Plus::Network:Interface:ETH:7.19.0 */
#define RTE_Network_Interface_ETH_0     /* Network Interface ETH 0 */
#define RTE_Network_Interface_ETH_1     /* Network Interface ETH 1 */

/* Keil.MDK-Plus::Network:Service:Web Server Compact:HTTP:7.19.0 */
#define RTE_Network_Web_Server_RO       /* Network Web Server with Read-only Web Resources */
/* Keil.MDK-Plus::Network:Socket:BSD:7.19.0 */
#define RTE_Network_Socket_BSD          /* Network Socket BSD */
/* Keil.MDK-Plus::Network:Socket:TCP:7.19.0 */
#define RTE_Network_Socket_TCP          /* Network Socket TCP */
/* Keil.MDK-Plus::Network:Socket:UDP:7.19.0 */
#define RTE_Network_Socket_UDP          /* Network Socket UDP */
/* Keil.MDK-Plus::USB:CORE:Release:6.17.0 */
#define RTE_USB_Core                    /* USB Core */
          #define RTE_USB_Core_Release            /* USB Core Release Version */
/* Keil.MDK-Plus::USB:Device:6.17.0 */
#define RTE_USB_Device_0                /* USB Device 0 */

/* Keil.MDK-Plus::USB:Device:CDC:6.17.0 */
#define RTE_USB_Device_CDC_0            /* USB Device CDC instance 0 */

/* Keil::CMSIS Driver:Ethernet MAC:1.6.0 */
#define RTE_Drivers_ETH_MAC0            /* Driver ETH_MAC0 */
/* Keil::CMSIS Driver:MCI:1.8.0 */
#define RTE_Drivers_MCI0                /* Driver MCI0 */
        #define RTE_Drivers_MCI1                /* Driver MCI1 */
/* Keil::CMSIS Driver:SPI:1.6.0 */
#define RTE_Drivers_SPI1                /* Driver SPI1 */
        #define RTE_Drivers_SPI2                /* Driver SPI2 */
        #define RTE_Drivers_SPI3                /* Driver SPI3 */
        #define RTE_Drivers_SPI4                /* Driver SPI4 */
        #define RTE_Drivers_SPI5                /* Driver SPI5 */
        #define RTE_Drivers_SPI6                /* Driver SPI6 */
/* Keil::CMSIS Driver:USART:2.3.0 */
#define RTE_Drivers_USART1              /* Driver USART1 */
        #define RTE_Drivers_USART2              /* Driver USART2 */
        #define RTE_Drivers_USART3              /* Driver USART3 */
        #define RTE_Drivers_USART4              /* Driver USART4 */
        #define RTE_Drivers_USART5              /* Driver USART5 */
        #define RTE_Drivers_USART6              /* Driver USART6 */
        #define RTE_Drivers_USART7              /* Driver USART7 */
        #define RTE_Drivers_USART8              /* Driver USART8 */
        #define RTE_Drivers_USART9              /* Driver USART9 */
        #define RTE_Drivers_USART10             /* Driver USART10 */
        #define RTE_Drivers_USART21             /* Driver USART21 */
/* Keil::CMSIS Driver:USB Device:1.6.0 */
#define RTE_Drivers_USBD0               /* Driver USBD0 */
        #define RTE_Drivers_USBD1               /* Driver USBD1 */
/* Keil::CMSIS Driver:USB Host:1.3.0 */
#define RTE_Drivers_USBH0               /* Driver USBH0 */
        #define RTE_Drivers_USBH1               /* Driver USBH1 */
/* Keil::CMSIS-Compiler:File Interface:MDK-MW File System:1.0.0 */
#define RTE_CMSIS_Compiler_File_Interface        /* CMSIS-Compiler File Interface */
        #define RTE_CMSIS_Compiler_File_Interface_MDK_MW /* CMSIS-Compiler File Interface: MDK-Middleware File System */
/* Keil::Device:STM32Cube Framework:STM32CubeMX:2.0.0 */
#define RTE_DEVICE_FRAMEWORK_CUBE_MX
/* Keil::Device:STM32Cube HAL:Common:1.11.0 */
#define RTE_DEVICE_HAL_COMMON
/* Keil::Device:STM32Cube HAL:Cortex:1.11.0 */
#define RTE_DEVICE_HAL_CORTEX
/* Keil::Device:STM32Cube HAL:DMA:1.11.0 */
#define RTE_DEVICE_HAL_DMA
/* Keil::Device:STM32Cube HAL:ETH:1.11.0 */
#define RTE_DEVICE_HAL_ETH
/* Keil::Device:STM32Cube HAL:FDCAN:1.11.0 */
#define RTE_DEVICE_HAL_FDCAN
/* Keil::Device:STM32Cube HAL:GPIO:1.11.0 */
#define RTE_DEVICE_HAL_GPIO
/* Keil::Device:STM32Cube HAL:IRDA:1.11.0 */
#define RTE_DEVICE_HAL_IRDA
/* Keil::Device:STM32Cube HAL:MMC:1.11.0 */
#define RTE_DEVICE_HAL_MMC
/* Keil::Device:STM32Cube HAL:PCD:1.11.0 */
#define RTE_DEVICE_HAL_PCD
/* Keil::Device:STM32Cube HAL:PWR:1.11.0 */
#define RTE_DEVICE_HAL_PWR
/* Keil::Device:STM32Cube HAL:RCC:1.11.0 */
#define RTE_DEVICE_HAL_RCC
/* Keil::Device:STM32Cube HAL:RNG:1.11.0 */
#define RTE_DEVICE_HAL_RNG
/* Keil::Device:STM32Cube HAL:RTC:1.11.0 */
#define RTE_DEVICE_HAL_RTC
/* Keil::Device:STM32Cube HAL:SD:1.11.0 */
#define RTE_DEVICE_HAL_SD
/* Keil::Device:STM32Cube HAL:SPI:1.11.0 */
#define RTE_DEVICE_HAL_SPI
/* Keil::Device:STM32Cube HAL:Smartcard:1.11.0 */
#define RTE_DEVICE_HAL_SMARTCARD
/* Keil::Device:STM32Cube HAL:TIM:1.11.0 */
#define RTE_DEVICE_HAL_TIM
/* Keil::Device:STM32Cube HAL:UART:1.11.0 */
#define RTE_DEVICE_HAL_UART
/* Keil::Device:STM32Cube HAL:USART:1.11.0 */
#define RTE_DEVICE_HAL_USART
/* Keil::Device:Startup:1.11.0 */
#define RTE_DEVICE_STARTUP_STM32H7XX    /* Device Startup for STM32H7 */


#endif /* RTE_COMPONENTS_H */
