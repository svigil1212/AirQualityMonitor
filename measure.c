/*
 * measure.c
 *
 *  Created on: Feb 20, 2022
 *      Author: svigi
 */

//#include "stm32f4xx_hal_gpio.h"
//#include "stm32f4xx_hal_adc.h"
#include"stm32f4xx.h"
#include "measure.h"
#include <stdint.h>
#include "globals.h"

void takeAveMeasurement(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, ADC_HandleTypeDef* hadc, uint8_t numSamples)
{

	//uint16_t measurement = 0;
	uint32_t sumMeasurement = 0;
	uint8_t i;
	for (i = 0; i < numSamples;i++){
	  HAL_GPIO_WritePin(GPIOx,GPIO_Pin, GPIO_PIN_RESET); // turn PM sensor LED on
	  HAL_Delay(1);									 // allow sensor to respond
	  HAL_ADC_Start(hadc);								 // take sensor measurement
	  HAL_ADC_PollForConversion(hadc, HAL_MAX_DELAY);   // wait for conversion to be complete
	  HAL_Delay(30);
	  HAL_GPIO_WritePin(GPIOx,GPIO_Pin, GPIO_PIN_SET);   // turn PM sensor LED off

	  sumMeasurement = sumMeasurement + HAL_ADC_GetValue(hadc);
	}
	 aveMeasurement = sumMeasurement/numSamples;

}

void takeBaseline(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, ADC_HandleTypeDef* hadc, uint8_t numAverages){
	uint32_t sumBaseline = 0;
	uint8_t i;
	for (i=0; i < numAverages;i++){
		takeAveMeasurement(GPIOx, GPIO_Pin, hadc, numSamples);
		sumBaseline = sumBaseline + aveMeasurement;
	}
	baseline = sumBaseline/numAverages;
}

void storeAlarmLevel(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, ADC_HandleTypeDef* hadc, uint8_t numAverages){
	uint32_t sumAlarmLevel = 0;
	uint8_t i;
	for (i=0; i < numAverages;i++){
		takeAveMeasurement(GPIOx, GPIO_Pin, hadc, numSamples);
		sumAlarmLevel = sumAlarmLevel + aveMeasurement;
	}
	alarmLevel = sumAlarmLevel/numAverages;
}

