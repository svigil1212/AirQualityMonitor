/*
 * measure.h
 *
 *  Created on: Feb 20, 2022
 *      Author: svigi
 */

#ifndef INC_MEASURE_H_
#define INC_MEASURE_H_

#include "globals.h"

void takeAveMeasurement(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, ADC_HandleTypeDef* hadc, uint8_t numSamples);

void takeBaseline(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, ADC_HandleTypeDef* hadc, uint8_t numAverages);

void storeAlarmLevel(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, ADC_HandleTypeDef* hadc, uint8_t numAverages);

#endif /* INC_MEASURE_H_ */
