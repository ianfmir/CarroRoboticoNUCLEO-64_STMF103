/*
 *  CarroRoboticoNUCLEO-64_STMF103.h
 *  Copyright (C) 2020  Bruno Guimarães Bitencourt <brunogbitencourt@ufmg.br>
 *                      Ian Fernandes Miranda <ianfm@ufmg.br>
 *
 *  Version 1.0 - API with the following implemented functions:
 *  void Alterna_LEDs(void);
 *	void Acende_LEDs(void);
 *	void Apaga_LEDs(void);
 *	void Envia_Codigo_Display(uint8_t carac, uint8_t num_display);
 *
 *  Based on MultiFuncShield-Library-1_3 implementation accessed at
 *  https://www.cohesivecomputing.co.uk/hackatronics/arduino-multi-function-shield/
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *  Created on: 6 de jan de 2020
 *  Institution: UFMG
 *  This API contain functions to provide use of some hardware resources
 *  from MFS (MultiFuncShield) available at:
 *  https://www.cohesivecomputing.co.uk/hackatronics/arduino-multi-function-shield/
 *  Push-button switches (SW1, SW2, SW3) attended by Rising Edge External Interrupt.
 *  Leds (D1, D2, D3 and D4).
 *  Four Seven-segments Display (HS410361) programmed by two 74HC595 chips using
 *  Bit Banging programming technique.
 */

#ifndef CARROROBOTICONUCLEO_64_STMF103_H_
#define CARROROBOTICONUCLEO_64_STMF103_H_
#include "stm32f1xx_hal.h"

void AndaFrente(TIM_HandleTypeDef timer);
void AndaRe(TIM_HandleTypeDef timer);
void Parar(TIM_HandleTypeDef timer);
void ViraDireita90(TIM_HandleTypeDef timer);
void ViraEsquerda90(TIM_HandleTypeDef timer);
void Gira180(TIM_HandleTypeDef timer);
void ViraEsquerdaSuave(TIM_HandleTypeDef timer);
void ViraDireitaSuave(TIM_HandleTypeDef timer);



#endif /* CARROROBOTICONUCLEO_64_STMF103_H_ */
