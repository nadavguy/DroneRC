/*
 * FrameHelper.c
 *
 *  Created on: May 5, 2021
 *      Author: gilad
 */

#include "main.h"
#include "DEV_Config.h"
#include "LCD_2inch4.h"
#include "GUI_Paint.h"

uint8_t numberOfDisplayedSafeAirIcons = 0;

uint32_t LCDArraySize = 153600;

void createEmptyFrame(bool isMenuFrame, bool addStatusBar)
{
	uint8_t offset = 0;
	if (addStatusBar)
	{
//		if (isPortrait)
//		{
			offset = (uint8_t)STATUSBAR_HEIGHT;
			Paint_DrawLine(LineStartX, LineY, LineEndX, LineY, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
//		}
	}
	if (!isMenuFrame)
	{
		memset(nextFrameToDraw,0x00,LCDArraySize);
		if (isPortrait)
		{
			for (int i = 0 ; i < (LCDArraySize - SCREEN_WIDTH * offset * 2) /2 ; i++)
			{
				nextFrameToDraw[(i + SCREEN_WIDTH * offset) * 2] = BACKGROUND_HIGH_BYTE;
				nextFrameToDraw[(i + SCREEN_WIDTH * offset) * 2 + 1] = BACKGROUND_LOW_BYTE;
			}
		}
		else
		{
			for (int j = 0; j < SCREEN_HEIGHT; j++)
			{
				for (int i = 0 ; i < SCREEN_WIDTH ; i++)
				{
					if (i >= offset)
					{
						nextFrameToDraw[(j * SCREEN_WIDTH + i) * 2] = BACKGROUND_HIGH_BYTE;
						nextFrameToDraw[(j * SCREEN_WIDTH + i) * 2 + 1] = BACKGROUND_LOW_BYTE;
					}
				}
			}
		}
	}
	else if (isMenuFrame)
	{
		memset(nextFrameToDraw,0xFF,LCDArraySize);
	}
}

void updateNextFrame(void)
{
//	LCD_1IN8_SetCursor(0, 0);
	if (HAL_GetTick() - lastFrameDisplayed > 30)
	{
		LCD_2IN4_SetWindow(0, 0, LCD_2IN4_WIDTH, LCD_2IN4_HEIGHT);
		DEV_Digital_Write(DEV_DC_PIN, 1);
		HAL_SPI_Transmit(&DEV_SPI, (uint8_t *)&nextFrameToDraw[0], 48000, 1500);
		HAL_SPI_Transmit(&DEV_SPI, (uint8_t *)&nextFrameToDraw[48000], 48000, 1500);
		HAL_SPI_Transmit(&DEV_SPI, (uint8_t *)&nextFrameToDraw[96000], 48000, 1500);
		HAL_SPI_Transmit(&DEV_SPI, (uint8_t *)&nextFrameToDraw[144000], 9600, 1500);
//		createEmptyFrame();
		lastFrameDisplayed = HAL_GetTick();
	}
}

void addImageToNextFrame(const unsigned char *image, uint8_t Height, uint8_t Width, uint8_t Xstart, uint8_t Ystart)
{
	for (int i = 0 ; i < Height ; i++)
	{
		memcpy(&nextFrameToDraw[(Ystart + i) * SCREEN_WIDTH * 2 + Xstart * 2],&image[Width * 2 * i], Width * 2);
	}
}

void addRectangleToFrame(uint8_t xStart, uint8_t yStart, uint8_t xEnd, uint8_t yEnd, uint16_t Color)
{
	for (int i = 0 ; i < (xEnd - xStart) * (yEnd - yStart) ; i++)
	{
		nextFrameToDraw[(i + SCREEN_WIDTH * yStart + xStart) * 2] = (uint8_t)((Color & 0xFF00) >> 8 );
		nextFrameToDraw[(i + SCREEN_WIDTH * yStart + xStart) * 2 + 1] = (uint8_t)((Color & 0x00FF));
	}
}

void prepareNextFrame(void)
{

}
