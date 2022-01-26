/*
 * SticksInputAgent.c
 *
 *  Created on: Jan 22, 2022
 *      Author: raing
 */

#include "main.h"


uint8_t sticksInputArray[STICKS_RX_BUFFER] = {0};

uint16_t stickThrottle = 0;
uint16_t stickYaw = 0;
uint16_t stickRoll = 0;
uint16_t stickPitch = 0;
uint16_t rockerLeft = 0;
uint16_t rockerRight = 0;

bool isParsingSticksMessage = false;


void parseSticksMessage(void)
{
	if (isParsingSticksMessage)
	{
		uint8_t localArray[32] = {0};
		memmove(localArray, sticksInputArray, 32);
		for (int i = 0; i < 16 ; i++)
		{
			if ( (localArray[i] == 0xFA) && (localArray[i + 1] == 0xBD) && (localArray[i + 14] == 0xEA) && (localArray[i + 15] == 0xDD) )
			{
				stickThrottle = localArray[i + 2] * 256 + localArray[i + 3];
				stickYaw = localArray[i + 4] * 256 + localArray[i + 5];
				stickRoll = localArray[i + 6] * 256 + localArray[i + 7];
				stickPitch = localArray[i + 8] * 256 + localArray[i + 9];
				rockerLeft = localArray[i + 10] * 256 + localArray[i + 11];
				rockerRight = localArray[i + 12] * 256 + localArray[i + 13];
			}
		}
	}
	isParsingSticksMessage = false;
}
