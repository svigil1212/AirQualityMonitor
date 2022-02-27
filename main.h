/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "ssd1306.h"
#include "test.h"
#include "fonts.h"
#include <string.h>
#include <stdio.h>
#include "globals.h"
#include "measure.h"
#include "show.h"
#include "alarm.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define START 0
#define MEASURE 1
#define CAL_BASELINE 2
#define CAL_ALARM_LEVEL 3
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CalBaselineButton_Pin GPIO_PIN_2
#define CalBaselineButton_GPIO_Port GPIOE
#define CalBaselineButton_EXTI_IRQn EXTI2_IRQn
#define CalAlarmButton_Pin GPIO_PIN_4
#define CalAlarmButton_GPIO_Port GPIOE
#define CalAlarmButton_EXTI_IRQn EXTI4_IRQn
#define PH0_OSC_IN_Pin GPIO_PIN_0
#define PH0_OSC_IN_GPIO_Port GPIOH
#define PH1_OSC_OUT_Pin GPIO_PIN_1
#define PH1_OSC_OUT_GPIO_Port GPIOH
#define PWM_Buzzer1_Pin GPIO_PIN_1
#define PWM_Buzzer1_GPIO_Port GPIOA
#define PM_Sensor_Signal_Pin GPIO_PIN_2
#define PM_Sensor_Signal_GPIO_Port GPIOA
#define LED_PMsensor_Pin GPIO_PIN_3
#define LED_PMsensor_GPIO_Port GPIOA
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define I2C_SCL_OLED_Pin GPIO_PIN_10
#define I2C_SCL_OLED_GPIO_Port GPIOB
#define I2C_SDA_OLED_Pin GPIO_PIN_11
#define I2C_SDA_OLED_GPIO_Port GPIOB
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
