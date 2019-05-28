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
void init_led_green(void)
{
    __HAL_RCC_GPIOF_CLK_ENABLE();

    GPIO_InitTypeDef led_green;
    led_green.Pin = GPIO_PIN_10;
    led_green.Mode = GPIO_MODE_OUTPUT_PP;
    led_green.Pull = GPIO_NOPULL;
    led_green.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(GPIOF, &led_green);
}

void init_led_orange(void)
{
    __HAL_RCC_GPIOF_CLK_ENABLE();

    GPIO_InitTypeDef led_orange;
    led_orange.Pin = GPIO_PIN_9;
    led_orange.Mode = GPIO_MODE_OUTPUT_PP;
    led_orange.Pull = GPIO_NOPULL;
    led_orange.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(GPIOF, &led_orange);
}

void init_led_red(void)
{
    __HAL_RCC_GPIOF_CLK_ENABLE();

    GPIO_InitTypeDef led_red;
    led_red.Pin = GPIO_PIN_8;
    led_red.Mode = GPIO_MODE_OUTPUT_PP;
    led_red.Pull = GPIO_NOPULL;
    led_red.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(GPIOF, &led_red);
}


TIM_HandleTypeDef timer_handle;

void init_timer()
{
    __HAL_RCC_TIM2_CLK_ENABLE();

    timer_handle.Instance = TIM2;
    timer_handle.Init.Prescaler = 32400 - 1; // 108000000/54000=2500 -> speed of 1 count-up: 1/2500 sec = 100 ms
    timer_handle.Init.Period = 40000 - 1; // 4000 x 0.3 ms = 12 second period
    timer_handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    timer_handle.Init.CounterMode = TIM_COUNTERMODE_UP;

    HAL_TIM_Base_Init(&timer_handle);
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
    /* USER CODE BEGIN 1 */

    /* USER CODE END 1 */


    /* MCU Configuration--------------------------------------------------------*/

    /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
    HAL_Init();

    /* USER CODE BEGIN Init */

    /* USER CODE END Init */

    /* Configure the system clock */
    SystemClock_Config();

    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */

    /* Initialize all configured peripherals */
    /* USER CODE BEGIN 2 */
    init_timer();
    init_led_green();
    init_led_orange();
    init_led_red();

    /* starting the timer */
    HAL_TIM_Base_Start(&timer_handle);

    uint16_t timer_value = 0;

    /* USER CODE END 2 */

    /* Infinite loop */
    /* USER CODE BEGIN WHILE */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"

    while (1) {
        /* USER CODE END WHILE */
        timer_value = __HAL_TIM_GET_COUNTER(&timer_handle);
        if (timer_value == 0) {
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, 1); //green
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, 0); //orange
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, 0); //red
        } else if (timer_value == 10000) {
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, 0); //green
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, 1); //orange
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, 0); //red
        } else if (timer_value == 20000) {
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, 0); //green
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, 0); //orange
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, 1); //red
        } else if (timer_value == 30000) {
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, 0); //green
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, 1); //orange
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, 1); //red
        }

        //timer_value = __HAL_TIM_GET_COUNTER(&timer_handle);
        //if (timer_value == 0) {
        //    BSP_LED_On(LED_GREEN);
        //}
        //if (timer_value == 1000) {
        //    BSP_LED_Off(LED_GREEN);
        //}
        /* USER CODE BEGIN 3 */
    }

#pragma clang diagnostic pop
    /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /**Configure the main internal regulator output voltage */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
    RCC_OscInitStruct.PLL.PLLM = 8;
    RCC_OscInitStruct.PLL.PLLN = 216;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 2;

    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
        Error_Handler();
    }

    /**Activate the Over-Drive mode */
    if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
        Error_Handler();
    }

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
        Error_Handler();
    }
}

/* USER CODE BEGIN 4 */

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
