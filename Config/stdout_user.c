/*-----------------------------------------------------------------------------
 * Name:    stdout_user.c
 * Purpose: STDOUT User Template
 * Rev.:    1.0.0
 *-----------------------------------------------------------------------------*/

/*
 * Copyright (C) 2023 ARM Limited or its affiliates. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "RTE_Components.h"
#include "retarget_stdout.h"
#include "main.h"
/**
  Put a character to the stdout

  \param[in]   ch  Character to output
  \return          The character written, or -1 on write error.
*/

#if defined(RTE_CMSIS_Compiler_STDOUT_Custom)

int stdout_putchar (int ch) {
  // ...
	uint8_t buf[1];
  buf[0] = ch;

	extern UART_HandleTypeDef hlpuart1;
	HAL_UART_Transmit(&hlpuart1, buf, 1, 1000);
	
  return (1);
}

#endif
