/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {
	HAL_Init();

	BSP_LED_Init(LED1);

	while (1) {
		int i = 8;
		for (; i > 0; i /= 2) {
			for (int j = 0; j < 3; ++j) {
				BSP_LED_On(LED1);
				HAL_Delay(i * 125);
				BSP_LED_Off(LED1);
				HAL_Delay(i * 125);
			}
		}
		i = 2;
		for (; i < 9; i *= 2) {
			for (int j = 0; j < 3; ++j) {
				BSP_LED_On(LED1);
				HAL_Delay(i * 125);
				BSP_LED_Off(LED1);
				HAL_Delay(i * 125);
			}
		}
	}
}
