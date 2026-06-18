/*
 * it.c
 *
 *  Created on: Jun 18, 2026
 *      Author: Joelikane
 */


#include "main.h"


void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}

