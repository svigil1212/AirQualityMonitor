/*
 * alarm.c
 *
 *  Created on: Feb 26, 2022
 *      Author: svigi
 */
#include "alarm.h"
#include "ssd1306.h"
#include "tim.h"
void alarm(){
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
	SSD1306_InvertDisplay(1);
	HAL_Delay(50);
	SSD1306_InvertDisplay(0);
	HAL_Delay(50);
	SSD1306_InvertDisplay(1);
	HAL_Delay(50);
	SSD1306_InvertDisplay(0);
	HAL_TIM_PWM_Stop(&htim2, TIM_CHANNEL_2);
}
