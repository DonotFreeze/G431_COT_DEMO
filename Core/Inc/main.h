/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_BLUE_Pin GPIO_PIN_13
#define LED_BLUE_GPIO_Port GPIOC
#define LED_GREEN_Pin GPIO_PIN_14
#define LED_GREEN_GPIO_Port GPIOC
#define LED_RED_Pin GPIO_PIN_15
#define LED_RED_GPIO_Port GPIOC
#define REF1V65_OUT_Pin GPIO_PIN_2
#define REF1V65_OUT_GPIO_Port GPIOA
#define REF1V65_IN_Pin GPIO_PIN_3
#define REF1V65_IN_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

#define LED_RED_ON HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,GPIO_PIN_SET)
#define LED_RED_OFF HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,GPIO_PIN_RESET)
#define LED_RED_BLINK HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin)

#define LED_GREEN_ON HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,GPIO_PIN_SET)
#define LED_GREEN_OFF HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,GPIO_PIN_RESET)
#define LED_GREEN_BLINK HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin)

#define LED_BLUE_ON HAL_GPIO_WritePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin,GPIO_PIN_SET)
#define LED_BLUE_OFF HAL_GPIO_WritePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin,GPIO_PIN_RESET)
#define LED_BLUE_BLINK HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin)


#define SET_PWM_COMPARE(a) htim1.Instance->CCR2 = (a)
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
