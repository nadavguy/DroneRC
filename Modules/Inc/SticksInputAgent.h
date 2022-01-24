/*
 * SticksInputAgent.h
 *
 *  Created on: Jan 22, 2022
 *      Author: raing
 */

#ifndef INC_STICKSINPUTAGENT_H_
#define INC_STICKSINPUTAGENT_H_

#include "main.h"

#define STICKS_RX_BUFFER 32

extern uint8_t sticksInputArray[STICKS_RX_BUFFER];

extern uint16_t stickThrottle;
extern uint16_t stickYaw;
extern uint16_t stickRoll;
extern uint16_t stickPitch;
extern uint16_t rockerLeft;
extern uint16_t rockerRight;

extern bool isParsingSticksMessage;

extern void parseSticksMessage(void);

#endif /* INC_STICKSINPUTAGENT_H_ */
