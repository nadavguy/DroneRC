/*
 * ScreenSaverImages.c
 *
 *  Created on: Nov 17, 2021
 *      Author: gilad
 */

//0xFF White
//0x00 Black
//const unsigned char gImage_BallTemplate[1152] = {/* 0X00,0X10,0X18,0X00,0X18,0X00,0X01,0X1B,*/
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
//		0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0X00,
//		0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0X00,0X00,0X00,0X00,0X20,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
//		0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//		};
//
//const unsigned char gImage_OrangeBall[1152] = { /*0X00,0X10,0X18,0X00,0X18,0X00,0X01,0X1B,*/
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9D,0XFF,
//0X95,0XFE,0X8F,0XFD,0X2B,0XFD,0X4E,0XFD,0X4E,0XFD,0X2B,0XFD,0XAF,0XFD,0X95,0XFE,
//0XBD,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9D,0XFF,0XF1,0XFD,0X4E,0XFD,
//0X76,0XFE,0X5A,0XFF,0X9C,0XFF,0X9C,0XFF,0X9C,0XFF,0X9C,0XFF,0X3A,0XFF,0X76,0XFE,
//0X4E,0XFD,0XF1,0XFD,0X9D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFE,0X0B,0XFD,0X75,0XFE,0X7A,0XFF,
//0X7A,0XFF,0X7A,0XFF,0X7A,0XFF,0X7A,0XFF,0X7A,0XFF,0X7A,0XFF,0X7A,0XFF,0X7A,0XFF,
//0X7A,0XFF,0X75,0XFE,0X0B,0XFD,0XF8,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X96,0XFE,0XC9,0XFC,0XD6,0XFE,0X38,0XFF,0X38,0XFF,
//0X38,0XFF,0X38,0XFF,0X38,0XFF,0X38,0XFF,0X38,0XFF,0X38,0XFF,0X38,0XFF,0X38,0XFF,
//0X38,0XFF,0X38,0XFF,0XD6,0XFE,0XC9,0XFC,0X96,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XF8,0XFE,0X85,0XFC,0X73,0XFE,0XF6,0XFE,0XF6,0XFE,0XF6,0XFE,
//0XF6,0XFE,0XF6,0XFE,0XF6,0XFE,0XF6,0XFE,0XF6,0XFE,0XF6,0XFE,0XF6,0XFE,0XF6,0XFE,
//0XF6,0XFE,0XF6,0XFE,0XF6,0XFE,0X73,0XFE,0X85,0XFC,0XF8,0XFE,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0X9D,0XFF,0XC8,0XFC,0X4C,0XFD,0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,
//0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,
//0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,0XB4,0XFE,0X4B,0XFD,0XC8,0XFC,0XBD,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XF1,0XFD,0X60,0XFC,0XEF,0XFD,0X72,0XFE,0X72,0XFE,0X72,0XFE,0X72,0XFE,
//0X72,0XFE,0X72,0XFE,0X72,0XFE,0X72,0XFE,0X72,0XFE,0X72,0XFE,0X72,0XFE,0X72,0XFE,
//0X72,0XFE,0X72,0XFE,0X72,0XFE,0X72,0XFE,0XEF,0XFD,0X60,0XFC,0XF1,0XFD,0XFF,0XFF,
//0X9D,0XFF,0XA7,0XFC,0X60,0XFC,0XEE,0XFD,0X30,0XFE,0X50,0XFE,0X50,0XFE,0X50,0XFE,
//0X50,0XFE,0X50,0XFE,0X50,0XFE,0X50,0XFE,0X50,0XFE,0X50,0XFE,0X50,0XFE,0X50,0XFE,
//0X50,0XFE,0X50,0XFE,0X50,0XFE,0X30,0XFE,0XEE,0XFD,0X60,0XFC,0XA7,0XFC,0XBD,0XFF,
//0X95,0XFE,0X82,0XFC,0XA1,0XFC,0XCD,0XFD,0X0E,0XFE,0X2F,0XFE,0X2F,0XFE,0X2F,0XFE,
//0X2F,0XFE,0X2F,0XFE,0X2F,0XFE,0X2F,0XFE,0X2F,0XFE,0X2F,0XFE,0X2F,0XFE,0X2F,0XFE,
//0X2F,0XFE,0X2F,0XFE,0X2F,0XFE,0X0E,0XFE,0XCD,0XFD,0X81,0XFC,0X82,0XFC,0X96,0XFE,
//0XAF,0XFD,0XC2,0XFC,0XC2,0XFC,0X8A,0XFD,0X0D,0XFE,0X0E,0XFE,0X0E,0XFE,0X0E,0XFE,
//0X0E,0XFE,0X2E,0XFE,0X2E,0XFE,0X2E,0XFE,0X2E,0XFE,0X2E,0XFE,0X2E,0XFE,0X0E,0XFE,
//0X0E,0XFE,0X0E,0XFE,0X0E,0XFE,0X0D,0XFE,0X8A,0XFD,0XC2,0XFC,0XA2,0XFC,0XAF,0XFD,
//0X2A,0XFD,0XE3,0XFC,0X04,0XFD,0X27,0XFD,0XED,0XFD,0XED,0XFD,0X0D,0XFE,0X0D,0XFE,
//0X0E,0XFE,0X0E,0XFE,0X0E,0XFE,0X0E,0XFE,0X0E,0XFE,0X0E,0XFE,0X0E,0XFE,0X0E,0XFE,
//0X0D,0XFE,0X0D,0XFE,0XED,0XFD,0XEC,0XFD,0X26,0XFD,0XE4,0XFC,0XE3,0XFC,0X4B,0XFD,
//0X08,0XFD,0X05,0XFD,0X25,0XFD,0X26,0XFD,0X8A,0XFD,0XEC,0XFD,0XED,0XFD,0X0D,0XFE,
//0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,
//0X0D,0XFE,0XED,0XFD,0XEC,0XFD,0X8A,0XFD,0X26,0XFD,0X25,0XFD,0X05,0XFD,0X09,0XFD,
//0X09,0XFD,0X46,0XFD,0X47,0XFD,0X67,0XFD,0X68,0XFD,0XCB,0XFD,0XEC,0XFD,0X0D,0XFE,
//0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,
//0X0D,0XFE,0XEC,0XFD,0XAA,0XFD,0X68,0XFD,0X67,0XFD,0X47,0XFD,0X46,0XFD,0X29,0XFD,
//0X6B,0XFD,0X68,0XFD,0X88,0XFD,0X89,0XFD,0XA9,0XFD,0XAA,0XFD,0XCB,0XFD,0X0C,0XFE,
//0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,0X0D,0XFE,
//0XEC,0XFD,0XCB,0XFD,0XAA,0XFD,0XA9,0XFD,0X89,0XFD,0X68,0XFD,0X67,0XFD,0X6C,0XFD,
//0XEF,0XFD,0X89,0XFD,0XAA,0XFD,0XCA,0XFD,0XCB,0XFD,0XEC,0XFD,0XEC,0XFD,0X0C,0XFE,
//0X0D,0XFE,0X2D,0XFE,0X2E,0XFE,0X2E,0XFE,0X2E,0XFE,0X2E,0XFE,0X2D,0XFE,0X0D,0XFE,
//0X0C,0XFE,0XEC,0XFD,0XEB,0XFD,0XCB,0XFD,0XAA,0XFD,0XA9,0XFD,0X89,0XFD,0XF0,0XFD,
//0X95,0XFE,0XAA,0XFD,0XCB,0XFD,0XEC,0XFD,0X0C,0XFE,0X0D,0XFE,0X2E,0XFE,0X2E,0XFE,
//0X4E,0XFE,0X4F,0XFE,0X4F,0XFE,0X4F,0XFE,0X4F,0XFE,0X4F,0XFE,0X4F,0XFE,0X2E,0XFE,
//0X2E,0XFE,0X2D,0XFE,0X0D,0XFE,0XEC,0XFD,0XEB,0XFD,0XCA,0XFD,0XAA,0XFD,0X96,0XFE,
//0X9D,0XFF,0X8B,0XFD,0XEC,0XFD,0X0D,0XFE,0X2E,0XFE,0X4E,0XFE,0X4F,0XFE,0X70,0XFE,
//0X70,0XFE,0X90,0XFE,0X91,0XFE,0X91,0XFE,0X91,0XFE,0X91,0XFE,0X70,0XFE,0X70,0XFE,
//0X4F,0XFE,0X4F,0XFE,0X2E,0XFE,0X0D,0XFE,0X0C,0XFE,0XEC,0XFD,0X6B,0XFD,0XBD,0XFF,
//0XFF,0XFF,0X12,0XFE,0X0D,0XFE,0X2E,0XFE,0X4F,0XFE,0X70,0XFE,0X70,0XFE,0X91,0XFE,
//0XB2,0XFE,0XB2,0XFE,0XB2,0XFE,0XD3,0XFE,0XD2,0XFE,0XB2,0XFE,0XB2,0XFE,0X91,0XFE,
//0X91,0XFE,0X70,0XFE,0X4F,0XFE,0X2E,0XFE,0X2D,0XFE,0X0C,0XFE,0X12,0XFE,0XFF,0XFF,
//0XFF,0XFF,0X9D,0XFF,0XCD,0XFD,0X4F,0XFE,0X70,0XFE,0X91,0XFE,0XB2,0XFE,0XB2,0XFE,
//0XD3,0XFE,0XF4,0XFE,0XF4,0XFE,0XF4,0XFE,0XF4,0XFE,0XF4,0XFE,0XD3,0XFE,0XD3,0XFE,
//0XB2,0XFE,0X91,0XFE,0X70,0XFE,0X4F,0XFE,0X2E,0XFE,0XAD,0XFD,0X9D,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XF8,0XFE,0X0E,0XFE,0X90,0XFE,0XB1,0XFE,0XD2,0XFE,0XD3,0XFE,
//0XF4,0XFE,0X15,0XFF,0X36,0XFF,0X36,0XFF,0X36,0XFF,0X15,0XFF,0X15,0XFF,0XF4,0XFE,
//0XD3,0XFE,0XB2,0XFE,0X91,0XFE,0X70,0XFE,0XEE,0XFD,0XF8,0XFE,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XB6,0XFE,0X30,0XFE,0XB2,0XFE,0XD3,0XFE,0XF4,0XFE,
//0X15,0XFF,0X36,0XFF,0X57,0XFF,0X58,0XFF,0X57,0XFF,0X36,0XFF,0X15,0XFF,0XF4,0XFE,
//0XD3,0XFE,0XB2,0XFE,0X91,0XFE,0X0F,0XFE,0XB6,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFE,0X10,0XFE,0XD3,0XFE,0XF4,0XFE,
//0X15,0XFF,0X36,0XFF,0X57,0XFF,0X58,0XFF,0X57,0XFF,0X36,0XFF,0X15,0XFF,0XF4,0XFE,
//0XD3,0XFE,0XB2,0XFE,0XEF,0XFD,0XF8,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9D,0XFF,0X53,0XFE,0X31,0XFE,
//0XF4,0XFE,0X15,0XFF,0X36,0XFF,0X36,0XFF,0X36,0XFF,0X15,0XFF,0XF4,0XFE,0XD3,0XFE,
//0X30,0XFE,0X53,0XFE,0X9D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9D,0XFF,
//0X96,0XFE,0X53,0XFE,0X32,0XFE,0X11,0XFE,0X11,0XFE,0X32,0XFE,0X53,0XFE,0X96,0XFE,
//0X9D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//};
//
//const unsigned char gImage_BlueBall[1152] = { /*0X00,0X10,0X18,0X00,0X18,0X00,0X01,0X1B,*/
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0X7D,0X8C,0XFB,0X41,0XB9,0X18,0XD9,0X20,0XD9,0X20,0XB9,0X18,0XFB,0X41,0X7D,0X8C,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1B,0X42,0X18,0X00,
//0XDB,0X83,0XBE,0XD6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XD6,0XDB,0X83,
//0X18,0X00,0X1B,0X42,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XBD,0X18,0X00,0X3B,0X8C,0XBF,0XF7,
//0X1E,0XE7,0XDE,0XDE,0XBE,0XDE,0XBE,0XDE,0XBE,0XDE,0XBE,0XDE,0XDE,0XDE,0X1E,0XE7,
//0XBF,0XF7,0X3B,0X8C,0X18,0X00,0XFE,0XBD,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDE,0X9C,0X17,0X00,0XFD,0XC5,0X9E,0XD6,0X3E,0XCE,
//0X3E,0XCE,0X3E,0XCE,0X3E,0XCE,0X3E,0XCE,0X3E,0XCE,0X3E,0XCE,0X3E,0XCE,0X3E,0XCE,
//0X3E,0XCE,0X9E,0XD6,0X1D,0XC6,0X17,0X00,0XDE,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0X1F,0XBE,0X16,0X00,0XFC,0XA4,0XFD,0XC5,0XBD,0XBD,0XBD,0XBD,
//0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,0XBD,
//0XBD,0XBD,0XBD,0XBD,0XFD,0XC5,0XFC,0XA4,0X16,0X00,0X1F,0XBE,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0X18,0X00,0X99,0X41,0XBD,0XBD,0X1C,0XAD,0X1C,0XAD,0X1C,0XAD,
//0X1C,0XAD,0X1C,0XAD,0X1C,0XAD,0X1C,0XAD,0X1C,0XAD,0X1C,0XAD,0X1C,0XAD,0X1C,0XAD,
//0X1C,0XAD,0X1C,0XAD,0X1C,0XAD,0XBD,0XBD,0X99,0X41,0X18,0X00,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XBC,0X52,0X16,0X00,0X9B,0X7B,0XDC,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,
//0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,
//0X9C,0X9C,0X9C,0X9C,0X9C,0X9C,0XDC,0XA4,0X9B,0X7B,0X16,0X00,0XBC,0X52,0XFF,0XFF,
//0XFF,0XFF,0X18,0X00,0X17,0X08,0XDB,0X83,0X3C,0X8C,0X3B,0X8C,0X3C,0X8C,0X3C,0X8C,
//0X3C,0X8C,0X3C,0X8C,0X3C,0X94,0X3C,0X94,0X3C,0X94,0X3C,0X94,0X3C,0X8C,0X3C,0X8C,
//0X3C,0X8C,0X3C,0X8C,0X3B,0X8C,0X3C,0X8C,0XDB,0X83,0X17,0X08,0X18,0X00,0XFF,0XFF,
//0XFE,0X9C,0X17,0X08,0X37,0X10,0X7B,0X73,0XFB,0X83,0XDB,0X83,0XDB,0X83,0XFB,0X83,
//0XFB,0X83,0XFB,0X83,0XFB,0X83,0XFB,0X83,0XFB,0X83,0XFB,0X83,0XFB,0X83,0XFB,0X83,
//0XFB,0X83,0XDB,0X83,0XDB,0X83,0XDB,0X83,0X5B,0X73,0X37,0X10,0X17,0X08,0XFE,0X9C,
//0XDC,0X5A,0X78,0X20,0XB8,0X20,0X7A,0X5A,0XBB,0X7B,0X9B,0X7B,0X9B,0X7B,0XBB,0X7B,
//0XBB,0X7B,0XBB,0X7B,0XBB,0X7B,0XBB,0X7B,0XBB,0X7B,0XBB,0X7B,0XBB,0X7B,0XBB,0X7B,
//0XBB,0X7B,0X9B,0X7B,0X9B,0X7B,0XBB,0X7B,0X7A,0X5A,0XB8,0X20,0X78,0X18,0XDC,0X5A,
//0X9A,0X31,0XF8,0X28,0X19,0X31,0X59,0X39,0X9B,0X7B,0X5B,0X73,0X7B,0X73,0X7B,0X73,
//0X7B,0X73,0X9B,0X7B,0X9B,0X7B,0X9B,0X7B,0X9B,0X7B,0X9B,0X7B,0X7B,0X7B,0X7B,0X73,
//0X7B,0X73,0X7B,0X73,0X5B,0X73,0X9B,0X7B,0X59,0X31,0X19,0X31,0XF8,0X28,0X7A,0X31,
//0X1A,0X29,0X59,0X39,0X79,0X39,0X79,0X39,0X5A,0X52,0X5B,0X73,0X3B,0X6B,0X5B,0X73,
//0X5B,0X73,0X5B,0X73,0X5B,0X73,0X7B,0X73,0X7B,0X73,0X5B,0X73,0X5B,0X73,0X5B,0X73,
//0X5B,0X73,0X3B,0X6B,0X5B,0X73,0X5A,0X52,0X79,0X39,0X79,0X39,0X59,0X31,0X1A,0X29,
//0X3A,0X29,0XB9,0X41,0XDA,0X41,0XFA,0X41,0XDA,0X41,0X9A,0X5A,0X3B,0X6B,0X3B,0X6B,
//0X3B,0X6B,0X3B,0X6B,0X5B,0X6B,0X5B,0X73,0X5B,0X73,0X5B,0X6B,0X3B,0X6B,0X3B,0X6B,
//0X3B,0X6B,0X3B,0X6B,0X9A,0X5A,0XDA,0X41,0XDA,0X41,0XBA,0X41,0X99,0X41,0X3A,0X29,
//0XDB,0X39,0XFA,0X49,0X1A,0X4A,0X3A,0X4A,0X5A,0X52,0X5A,0X52,0X9B,0X5A,0X1B,0X63,
//0X3B,0X6B,0X3B,0X6B,0X3B,0X6B,0X3B,0X6B,0X3B,0X6B,0X3B,0X6B,0X3B,0X6B,0X3B,0X6B,
//0X1B,0X63,0X9B,0X5A,0X5A,0X52,0X5A,0X52,0X1A,0X4A,0XFA,0X49,0XDA,0X41,0XDB,0X39,
//0X1C,0X63,0X1A,0X4A,0X5A,0X52,0X7B,0X52,0X9B,0X5A,0XBB,0X5A,0XDB,0X62,0XDB,0X62,
//0X1B,0X63,0X3B,0X6B,0X3C,0X6B,0X3C,0X6B,0X3C,0X6B,0X3C,0X6B,0X1B,0X6B,0XFB,0X62,
//0XDB,0X62,0XDB,0X5A,0XBB,0X5A,0X9B,0X5A,0X7A,0X52,0X5A,0X52,0XFA,0X49,0X1C,0X63,
//0XBD,0X94,0X1A,0X4A,0X9B,0X5A,0XBB,0X5A,0XFB,0X62,0X1B,0X63,0X3C,0X6B,0X5C,0X6B,
//0X5C,0X6B,0X7C,0X73,0X7C,0X73,0X7C,0X73,0X7C,0X73,0X7C,0X73,0X5C,0X6B,0X5C,0X6B,
//0X3C,0X6B,0X1B,0X6B,0XFB,0X62,0XDB,0X62,0XBB,0X5A,0X9B,0X5A,0XFA,0X49,0XBD,0X94,
//0XFF,0XFF,0XDA,0X18,0XFB,0X62,0X1B,0X63,0X3C,0X6B,0X5C,0X6B,0X7C,0X73,0X9C,0X73,
//0XBC,0X7B,0XDC,0X7B,0XDC,0X7B,0XDD,0X7B,0XDC,0X7B,0XDC,0X7B,0XBC,0X7B,0XBC,0X73,
//0X9C,0X73,0X7C,0X73,0X3C,0X6B,0X1B,0X6B,0XFB,0X62,0XDB,0X62,0XBA,0X18,0XFF,0XFF,
//0XFF,0XFF,0XBC,0X52,0XFB,0X62,0X3C,0X6B,0X7C,0X73,0X9C,0X73,0XBC,0X7B,0XFD,0X7B,
//0XFD,0X83,0X1D,0X84,0X3D,0X84,0X3D,0X84,0X3D,0X84,0X3D,0X84,0X1D,0X84,0XFD,0X7B,
//0XDC,0X7B,0XBC,0X73,0X7C,0X73,0X5C,0X6B,0X3C,0X6B,0XDB,0X62,0XBC,0X52,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0X1A,0X21,0XBC,0X7B,0X9C,0X73,0XDC,0X7B,0XFD,0X83,0X3D,0X84,
//0X5D,0X8C,0X7D,0X8C,0X9D,0X8C,0X9E,0X94,0X9D,0X94,0X7D,0X8C,0X5D,0X8C,0X3D,0X84,
//0X1D,0X84,0XDD,0X7B,0XBC,0X7B,0X7C,0X73,0X7C,0X73,0XFA,0X20,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0X9E,0XB5,0XFB,0X39,0XFD,0X83,0XFD,0X83,0X3D,0X84,0X7D,0X8C,
//0X9E,0X94,0XBE,0X94,0XDE,0X9C,0XFE,0X9C,0XFE,0X9C,0XDE,0X94,0X9E,0X94,0X7D,0X8C,
//0X3D,0X8C,0X1D,0X84,0XDC,0X7B,0XDC,0X7B,0XDB,0X39,0X9E,0XB5,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0X8C,0X3B,0X42,0X5D,0X8C,0X5D,0X8C,0X9D,0X8C,
//0XBE,0X94,0XFE,0X9C,0X3E,0XA5,0X5F,0XA5,0X3E,0XA5,0X1E,0X9D,0XDE,0X94,0X9E,0X94,
//0X5D,0X8C,0X3D,0X84,0X3D,0X84,0XFB,0X41,0X7D,0X8C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7E,0XAD,0X7B,0X29,0X7D,0X8C,0XBE,0X94,
//0XDE,0X94,0XFE,0X9C,0X3E,0XA5,0X5F,0XA5,0X3E,0XA5,0XFE,0X9C,0XDE,0X94,0X9E,0X94,
//0X9D,0X94,0X3D,0X8C,0X5B,0X29,0X9E,0XAD,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XBC,0X52,0XFB,0X39,
//0X7D,0X8C,0XDE,0X9C,0X1E,0X9D,0X1E,0XA5,0X1E,0XA5,0XFE,0X9C,0XBE,0X94,0X5D,0X8C,
//0XDB,0X39,0XBC,0X52,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,
//0X7D,0X8C,0X5C,0X6B,0XDC,0X5A,0X7C,0X4A,0X7C,0X4A,0XDC,0X5A,0X5C,0X6B,0X7D,0X8C,
//0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
//};

const unsigned char gImage_LoGoScreenSaverTemplate[1560] = { /*0X00,0X10,0X1A,0X00,0X1E,0X00,0X01,0X1B,*/
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,
0X71,0X8C,0XE7,0X39,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X69,0X4A,0XF3,0X9C,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XEF,0X7B,0X61,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X08,0X71,0X8C,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFB,0XDE,0X65,0X29,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X65,0X29,0X6D,0X6B,
0XEF,0X7B,0XEF,0X7B,0XEB,0X5A,0XE3,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XE7,0X39,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFB,0XDE,0X61,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0XEB,0X5A,0XFB,0XDE,
0XFF,0XFF,0XF7,0XBD,0XF7,0XBD,0XF7,0XBD,0XF7,0XBD,0XFF,0XFF,0XF7,0XBD,0XE7,0X39,
0X00,0X00,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0X65,0X29,0X00,0X00,0X00,0X00,0X61,0X08,0X79,0XCE,
0X79,0XCE,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X08,
0XEB,0X5A,0XFB,0XDE,0X75,0XAD,0X61,0X08,0X00,0X00,0X00,0X00,0XE7,0X39,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X6D,0X6B,0X00,0X00,0X00,0X00,0X61,0X08,
0X79,0XCE,0XEF,0X7B,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X08,0XF3,0X9C,0X79,0XCE,0X61,0X08,0X00,0X00,
0X00,0X00,0XEF,0X7B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XDE,0X00,0X00,0X00,0X00,
0X61,0X08,0X79,0XCE,0XEF,0X7B,0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X08,0XEB,0X5A,
0XEF,0X7B,0XEF,0X7B,0X69,0X4A,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,
0XF7,0XBD,0X00,0X00,0X00,0X00,0X61,0X08,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,
0X00,0X00,0X00,0X00,0XEF,0X7B,0XF7,0XBD,0X00,0X00,0X00,0X00,0X00,0X00,0XEB,0X5A,
0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XDE,0X69,0X4A,0X00,0X00,
0X00,0X00,0X61,0X08,0XFB,0XDE,0X6D,0X6B,0X00,0X00,0X00,0X00,0XEF,0X7B,0XFF,0XFF,
0X9E,0XF7,0X00,0X00,0X00,0X00,0X61,0X08,0XFF,0XFF,0XE7,0X39,0X00,0X00,0X00,0X00,
0XEF,0X7B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0XEB,0X5A,0X7D,0XEF,0X00,0X00,0X00,0X00,
0XE3,0X18,0XFF,0XFF,0X18,0XC6,0X00,0X00,0X00,0X00,0X6D,0X6B,0X79,0XCE,0X00,0X00,
0X00,0X00,0X65,0X29,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0XE3,0X18,0X00,0X00,0X00,0X00,0XFB,0XDE,
0X69,0X4A,0X00,0X00,0X00,0X00,0X3C,0XE7,0XF3,0X9C,0X00,0X00,0X00,0X00,0X75,0XAD,
0XEF,0X7B,0X00,0X00,0X00,0X00,0XF3,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X71,0X8C,0X00,0X00,
0X00,0X00,0XF3,0X9C,0XEF,0X7B,0X00,0X00,0X00,0X00,0X79,0XCE,0XF3,0X9C,0X00,0X00,
0X00,0X00,0XF7,0XBD,0X69,0X4A,0X00,0X00,0X00,0X00,0XFB,0XDE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF7,0XBD,0X00,0X00,0X00,0X00,0XEF,0X7B,0XF7,0XBD,0X00,0X00,0X00,0X00,0X55,0XAD,
0XF3,0X9C,0X00,0X00,0X00,0X00,0XF7,0XBD,0XE7,0X39,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF7,0XBD,0X00,0X00,0X00,0X00,0XEF,0X7B,0XF7,0XBD,0X00,0X00,
0X00,0X00,0XF3,0X9C,0XF3,0X9C,0X00,0X00,0X00,0X00,0XF7,0XBD,0XEB,0X5A,0X00,0X00,
0X00,0X00,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,0X00,0X00,0X00,0X00,0XEF,0X7B,
0X71,0X8C,0X00,0X00,0X00,0X00,0X55,0XAD,0XB6,0XB5,0X00,0X00,0X00,0X00,0X71,0X8C,
0XF3,0X9C,0X00,0X00,0X00,0X00,0XEB,0X5A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0X39,0X00,0X00,
0X00,0X00,0XF7,0XBD,0XEB,0X5A,0X00,0X00,0X00,0X00,0X79,0XCE,0XDB,0XDE,0X00,0X00,
0X00,0X00,0XE7,0X39,0X7D,0XEF,0X61,0X08,0X00,0X00,0X00,0X00,0X79,0XCE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,
0X00,0X00,0X00,0X00,0XE3,0X18,0X7D,0XEF,0X61,0X08,0X00,0X00,0X00,0X00,0X9E,0XF7,
0XFF,0XFF,0XE3,0X18,0X00,0X00,0X00,0X00,0XF7,0XBD,0X71,0X8C,0X00,0X00,0X00,0X00,
0X61,0X08,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0X75,0XAD,0XEF,0X7B,0X00,0X00,0X00,0X00,
0X69,0X4A,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,
0XE7,0X39,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0XEB,0X5A,0X79,0XCE,0X00,0X00,
0X00,0X00,0X00,0X00,0XF7,0XBD,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0X18,0X00,0X00,
0X00,0X00,0XEB,0X5A,0X7D,0XEF,0X65,0X29,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,
0XFF,0XFF,0XFF,0XFF,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0XE7,0X39,0X7D,0XEF,
0X65,0X29,0X00,0X00,0X00,0X00,0X69,0X4A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X79,0XCE,0X00,0X00,0X00,0X00,0X00,0X00,0X71,0X8C,0X79,0XCE,0X61,0X08,0X00,0X00,
0X00,0X00,0X65,0X29,0X7D,0XEF,0XFB,0XDE,0X61,0X08,0X00,0X00,0X00,0X00,0X65,0X29,
0X7D,0XEF,0X69,0X4A,0X00,0X00,0X00,0X00,0X61,0X08,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,
0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,0XEB,0X5A,0X00,0X00,
0X65,0X29,0X7D,0XEF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X61,0X08,0X79,0XCE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X71,0X8C,0X00,0X00,
0X00,0X00,0X00,0X00,0XF3,0X9C,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0X65,0X29,
0X7D,0XEF,0X71,0X8C,0X7D,0XEF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,0X79,0XCE,0X61,0X08,
0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,
0XF3,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,
0XF3,0X9C,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0X61,0X08,0X00,0X00,0X00,0X00,
0X00,0X00,0XF3,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,
0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XF3,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X65,0X29,0XFF,0XFF,0XFB,0XDE,
0X65,0X29,0X00,0X00,0X00,0X00,0X6D,0X6B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,0X65,0X29,0X7D,0XEF,
0X7D,0XEF,0X7D,0XEF,0X7D,0XEF,0X65,0X29,0XEB,0X5A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X7D,0XEF,0X65,0X29,0X65,0X29,0X7D,0XEF,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0XEF,0X7B,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0X65,0X29,0XEB,0X5A,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};



const unsigned char gImage_LoGoScreenSaver[1560] = { /*0X00,0X10,0X1A,0X00,0X1E,0X00,0X01,0X1B,*/
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,
0X71,0X8C,0XE7,0X39,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X69,0X4A,0XF3,0X9C,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XEF,0X7B,0X61,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X08,0X71,0X8C,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFB,0XDE,0X65,0X29,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X65,0X29,0X6D,0X6B,
0XEF,0X7B,0XEF,0X7B,0XEB,0X5A,0XE3,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XE7,0X39,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFB,0XDE,0X61,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0XEB,0X5A,0XFB,0XDE,
0XFF,0XFF,0XF7,0XBD,0XF7,0XBD,0XF7,0XBD,0XF7,0XBD,0XFF,0XFF,0XF7,0XBD,0XE7,0X39,
0X00,0X00,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0X65,0X29,0X00,0X00,0X00,0X00,0X61,0X08,0X79,0XCE,
0X79,0XCE,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X08,
0XEB,0X5A,0XFB,0XDE,0X75,0XAD,0X61,0X08,0X00,0X00,0X00,0X00,0XE7,0X39,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X6D,0X6B,0X00,0X00,0X00,0X00,0X61,0X08,
0X79,0XCE,0XEF,0X7B,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X08,0XF3,0X9C,0X79,0XCE,0X61,0X08,0X00,0X00,
0X00,0X00,0XEF,0X7B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XDE,0X00,0X00,0X00,0X00,
0X61,0X08,0X79,0XCE,0XEF,0X7B,0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X08,0XEB,0X5A,
0XEF,0X7B,0XEF,0X7B,0X69,0X4A,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,
0XF7,0XBD,0X00,0X00,0X00,0X00,0X61,0X08,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,
0X00,0X00,0X00,0X00,0XEF,0X7B,0XF7,0XBD,0X00,0X00,0X00,0X00,0X00,0X00,0XEB,0X5A,
0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XDE,0X69,0X4A,0X00,0X00,
0X00,0X00,0X61,0X08,0XFB,0XDE,0X6D,0X6B,0X00,0X00,0X00,0X00,0XEF,0X7B,0XFF,0XFF,
0X9E,0XF7,0X00,0X00,0X00,0X00,0X61,0X08,0XFF,0XFF,0XE7,0X39,0X00,0X00,0X00,0X00,
0XEF,0X7B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0XEB,0X5A,0X7D,0XEF,0X00,0X00,0X00,0X00,
0XE3,0X18,0XFF,0XFF,0X18,0XC6,0X00,0X00,0X00,0X00,0X6D,0X6B,0X79,0XCE,0X00,0X00,
0X00,0X00,0X65,0X29,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0XE3,0X18,0X00,0X00,0X00,0X00,0XFB,0XDE,
0X69,0X4A,0X00,0X00,0X00,0X00,0X3C,0XE7,0XF3,0X9C,0X00,0X00,0X00,0X00,0X75,0XAD,
0XEF,0X7B,0X00,0X00,0X00,0X00,0XF3,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X71,0X8C,0X00,0X00,
0X00,0X00,0XF3,0X9C,0XEF,0X7B,0X00,0X00,0X00,0X00,0X79,0XCE,0XF3,0X9C,0X00,0X00,
0X00,0X00,0XF7,0XBD,0X69,0X4A,0X00,0X00,0X00,0X00,0XFB,0XDE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF7,0XBD,0X00,0X00,0X00,0X00,0XEF,0X7B,0XF7,0XBD,0X00,0X00,0X00,0X00,0X55,0XAD,
0XF3,0X9C,0X00,0X00,0X00,0X00,0XF7,0XBD,0XE7,0X39,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF7,0XBD,0X00,0X00,0X00,0X00,0XEF,0X7B,0XF7,0XBD,0X00,0X00,
0X00,0X00,0XF3,0X9C,0XF3,0X9C,0X00,0X00,0X00,0X00,0XF7,0XBD,0XEB,0X5A,0X00,0X00,
0X00,0X00,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,0X00,0X00,0X00,0X00,0XEF,0X7B,
0X71,0X8C,0X00,0X00,0X00,0X00,0X55,0XAD,0XB6,0XB5,0X00,0X00,0X00,0X00,0X71,0X8C,
0XF3,0X9C,0X00,0X00,0X00,0X00,0XEB,0X5A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0X39,0X00,0X00,
0X00,0X00,0XF7,0XBD,0XEB,0X5A,0X00,0X00,0X00,0X00,0X79,0XCE,0XDB,0XDE,0X00,0X00,
0X00,0X00,0XE7,0X39,0X7D,0XEF,0X61,0X08,0X00,0X00,0X00,0X00,0X79,0XCE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,
0X00,0X00,0X00,0X00,0XE3,0X18,0X7D,0XEF,0X61,0X08,0X00,0X00,0X00,0X00,0X9E,0XF7,
0XFF,0XFF,0XE3,0X18,0X00,0X00,0X00,0X00,0XF7,0XBD,0X71,0X8C,0X00,0X00,0X00,0X00,
0X61,0X08,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0X75,0XAD,0XEF,0X7B,0X00,0X00,0X00,0X00,
0X69,0X4A,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,
0XE7,0X39,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0XEB,0X5A,0X79,0XCE,0X00,0X00,
0X00,0X00,0X00,0X00,0XF7,0XBD,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0X18,0X00,0X00,
0X00,0X00,0XEB,0X5A,0X7D,0XEF,0X65,0X29,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,
0XFF,0XFF,0XFF,0XFF,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0XE7,0X39,0X7D,0XEF,
0X65,0X29,0X00,0X00,0X00,0X00,0X69,0X4A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X79,0XCE,0X00,0X00,0X00,0X00,0X00,0X00,0X71,0X8C,0X79,0XCE,0X61,0X08,0X00,0X00,
0X00,0X00,0X65,0X29,0X7D,0XEF,0XFB,0XDE,0X61,0X08,0X00,0X00,0X00,0X00,0X65,0X29,
0X7D,0XEF,0X69,0X4A,0X00,0X00,0X00,0X00,0X61,0X08,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,
0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,0XEB,0X5A,0X00,0X00,
0X65,0X29,0X7D,0XEF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X61,0X08,0X79,0XCE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X71,0X8C,0X00,0X00,
0X00,0X00,0X00,0X00,0XF3,0X9C,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0X65,0X29,
0X7D,0XEF,0X71,0X8C,0X7D,0XEF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,0X79,0XCE,0X61,0X08,
0X00,0X00,0X00,0X00,0X65,0X29,0X7D,0XEF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,
0XF3,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X00,0X00,
0XF3,0X9C,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,0X61,0X08,0X00,0X00,0X00,0X00,
0X00,0X00,0XF3,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,
0X00,0X00,0X00,0X00,0X00,0X00,0XF3,0X9C,0X79,0XCE,0X61,0X08,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XF3,0X9C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XEB,0X5A,0X00,0X00,0X00,0X00,0X65,0X29,0XFF,0XFF,0XFB,0XDE,
0X65,0X29,0X00,0X00,0X00,0X00,0X6D,0X6B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0X9C,0X65,0X29,0X7D,0XEF,
0X7D,0XFF,0X7D,0XFF,0X7D,0XEF,0X65,0X29,0XEB,0X5A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X7D,0XFF,0X65,0XF9,0X65,0XF9,0X7D,0XFF,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEB,0XFA,0X00,0XF8,0X00,0XF8,0XEF,0XFB,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XFF,0X65,0XF9,0XEB,0XFA,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};
