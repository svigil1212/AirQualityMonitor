/*
 * show.c
 *
 *  Created on: Feb 25, 2022
 *      Author: svigi
 */

#include "show.h"


void showData (){
	char measStr[30];
	char modeStr[30];
	char baseStr[30];
	char alarmStr[30];

	SSD1306_Fill(0);

	sprintf(measStr, "PM A/D Count: %hu", aveMeasurement);
	SSD1306_GotoXY (0,0);
	SSD1306_Puts(measStr, &Font_7x10, 1);
	//SSD1306_UpdateScreen(); // update screen

	if(mode == 0){
	sprintf(modeStr, "Mode: START");
	}
	else if(mode == 1){
		sprintf(modeStr, "Mode: MEASURE");
		}
	else if(mode == 2){
			sprintf(modeStr, "Mode: BASELINE");
			}
	else if(mode == 3){
				sprintf(modeStr, "Mode: ALARM SET");
				}
	SSD1306_GotoXY (0,17);
	SSD1306_Puts(modeStr, &Font_7x10, 1);
	//SSD1306_UpdateScreen(); // update screen

	sprintf(baseStr, "Baseline: %hu", baseline);
	SSD1306_GotoXY (0,32);
	SSD1306_Puts(baseStr, &Font_7x10, 1);
	//SSD1306_UpdateScreen(); // update screen

	sprintf(alarmStr, "Alarm Level: %hu", alarmLevel);
	SSD1306_GotoXY (0,49);
	SSD1306_Puts(alarmStr, &Font_7x10, 1);
	SSD1306_UpdateScreen(); // update screen



}

