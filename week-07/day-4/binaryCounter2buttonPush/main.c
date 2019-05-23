/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
volatile int counter = 0;

void init_user_led_1(void)
{
    __HAL_RCC_GPIOF_CLK_ENABLE();

    GPIO_InitTypeDef user_led;
    user_led.Pin = GPIO_PIN_10;
    user_led.Mode = GPIO_MODE_OUTPUT_PP;
    user_led.Pull = GPIO_NOPULL;
    user_led.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(GPIOF, &user_led);
}

void init_user_led_2(void)
{
    __HAL_RCC_GPIOF_CLK_ENABLE();

    GPIO_InitTypeDef user_led;
    user_led.Pin = GPIO_PIN_9;
    user_led.Mode = GPIO_MODE_OUTPUT_PP;
    user_led.Pull = GPIO_NOPULL;
    user_led.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(GPIOF, &user_led);
}

void init_user_led_3(void)
{
    __HAL_RCC_GPIOF_CLK_ENABLE();

    GPIO_InitTypeDef user_led;
    user_led.Pin = GPIO_PIN_8;
    user_led.Mode = GPIO_MODE_OUTPUT_PP;
    user_led.Pull = GPIO_NOPULL;
    user_led.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(GPIOF, &user_led);
}

void init_user_led_4(void)
{
    __HAL_RCC_GPIOF_CLK_ENABLE();

    GPIO_InitTypeDef user_led;
    user_led.Pin = GPIO_PIN_7;
    user_led.Mode = GPIO_MODE_OUTPUT_PP;
    user_led.Pull = GPIO_NOPULL;
    user_led.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(GPIOF, &user_led);
}

void init_user_button(void)
{
    __HAL_RCC_GPIOI_CLK_ENABLE();

    GPIO_InitTypeDef gpio_config;

    gpio_config.Pin = GPIO_PIN_11;
    gpio_config.Mode = GPIO_MODE_IT_RISING;
    gpio_config.Pull = GPIO_NOPULL;
    gpio_config.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(GPIOI, &gpio_config);

    HAL_NVIC_SetPriority(EXTI15_10_IRQn, 16, 0);
    HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
    /* USER CODE BEGIN 1 */
    int numbers[16][4] = {
            {0, 0, 0, 0},
            {0, 0, 0, 1},
            {0, 0, 1, 0},
            {0, 0, 1, 1},
            {0, 1, 0, 0},
            {0, 1, 0, 1},
            {0, 1, 1, 1},
            {1, 0, 0, 0},
            {1, 0, 0, 1},
            {1, 0, 1, 0},
            {1, 0, 1, 1},
            {1, 1, 0, 0},
            {1, 1, 0, 1},
            {1, 1, 1, 0},
            {1, 1, 1, 1},

    };

    /* USER CODE END 1 */


    /* MCU Configuration--------------------------------------------------------*/

    /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
    HAL_Init();

    /* USER CODE BEGIN Init */
    init_user_led_1();
    init_user_led_2();
    init_user_led_3();
    init_user_led_4();
    init_user_button();
    /* USER CODE END Init */

    /* Configure the system clock */
    SystemClock_Config();

    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */

    /* Initialize all configured peripherals */
    /* USER CODE BEGIN 2 */

    /* USER CODE END 2 */

    /* Infinite loop */
    /* USER CODE BEGIN WHILE */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"


    while (1) {
        /* USER CODE END WHILE */
        if (counter < 16) {
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, (GPIO_PinState) numbers[counter][0]);
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, (GPIO_PinState) numbers[counter][1]);
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, (GPIO_PinState) numbers[counter][2]);
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, (GPIO_PinState) numbers[counter][3]);
            HAL_Delay(100);
        } else {
            counter = 0;
        }

    }

    /* USER CODE BEGIN 3 */
}

#pragma clang diagnostic pop
/* USER CODE END 3 */

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /** Configure the main internal regulator output voltage
    */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);
    /** Initializes the CPU, AHB and APB busses clocks
    */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
        Error_Handler();
    }
    /** Initializes the CPU, AHB and APB busses clocks
    */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
    |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) {
        Error_Handler();
    }
}

/* USER CODE BEGIN 4 */
void EXTI15_10_IRQHandler()
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    counter++;

}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
    /* USER CODE BEGIN Error_Handler_Debug */
    /* User can add his own implementation to report the HAL error return state */

    /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
