/*
 *******************************************************************************
 * MIT License
 *
 * Copyright (c) 2023 Jerryl James
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *******************************************************************************
 */

#ifndef MCP401X_H_
#define MCP401X_H_

#include "stm32l4xx_hal.h"					//Change here acc to STM32 series used

#define MCP401XADDR  		(0x2F<<1)  		//Default address for MCP401X IC, Table 5-2 of Datasheet
#define Rw					100       		//Wiper Resistance, Table 6-4 of Datasheet
#define MAXSTEP      		127       		//127 steps for MCP4017/18/19
#define MAXRESISTANCE    	10000     		//Change here acc to Value of MCP401X


void SetStep(uint8_t *step);
int ReadStep(void);
void SetResistance(uint32_t Rwb);
int ReadResistance(void);


#endif 
