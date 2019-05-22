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

void init_i_button() {
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOIEN; /* GPIOI clock enable */

	// Init user button (I 11)
	GPIOI->MODER |= 0b0000100000000000; /* configure PI11 in input mode */
}

void init_f_pins() {
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN; /* GPIOI clock enable */

	// Init user led (F 10)
	GPIOF->MODER |= (GPIO_MODER_MODER10_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_10); /* ensure push pull mode selected default */
	GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR10); /* ensure maximum speed setting (even though it is unnecessary) */
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR10); /* ensure all pull up pull down resistors are disabled */

	// Init user led (F 9)
	GPIOF->MODER |= (GPIO_MODER_MODER9_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_9); /* ensure push pull mode selected default */
	GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR9); /* ensure maximum speed setting (even though it is unnecessary) */
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR9); /* ensure all pull up pull down resistors are disabled */

	// Init user led (F 8)
	GPIOF->MODER |= (GPIO_MODER_MODER8_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_8); /* ensure push pull mode selected default */
	GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR8); /* ensure maximum speed setting (even though it is unnecessary) */
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR8); /* ensure all pull up pull down resistors are disabled */

	// Init user led (F 7)
	GPIOF->MODER |= (GPIO_MODER_MODER7_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_7); /* ensure push pull mode selected default */
	GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR7); /* ensure maximum speed setting (even though it is unnecessary) */
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR7); /* ensure all pull up pull down resistors are disabled */

}

int main(void) {
	HAL_Init();
	init_i_button();
	init_f_pins();

	uint32_t leds = (1 << 10) | (1 << 9) | (1 << 8) | (1 << 7);
	uint32_t user_button = (1 << 11);

	while (1) {
		/* when button is pushed LED turns on, when released, then LED turns off */
		if (GPIOI->IDR & (user_button)) {
			while (GPIOI->IDR & (user_button)) {
				GPIOF->BSRR = leds;
				HAL_Delay(500);
				GPIOF->BSRR = leds << 16;
				HAL_Delay(500);
			}
		} else {
			/* reset PI10 */
			GPIOF->BSRR = leds << 16;

			/* we could use the ODR register also
			 reset PI1, leave the other bits as they are
			 GPIOI->ODR ^= green_led;
			 */
		}
	}
}
