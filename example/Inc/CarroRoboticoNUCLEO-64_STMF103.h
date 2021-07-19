/*
 *  CarroRoboticoNUCLEO-64_STMF103.h
 *  Copyright (C) 2020  Bruno Guimarães Bitencourt <brunogbitencourt@ufmg.br>
 *                      Ian Fernandes Miranda <ianfm@ufmg.br>
 *
 *  Version 1.0 - API with the following implemented functions:
 *  void AndaFrente(TIM_HandleTypeDef timer);
 *  void AndaRe(TIM_HandleTypeDef timer);
 *  void Parar(TIM_HandleTypeDef timer);
 *  void ViraDireita90(TIM_HandleTypeDef timer);
 *  void ViraEsquerda90(TIM_HandleTypeDef timer);
 *  void Gira180(TIM_HandleTypeDef timer);
 *  void ViraEsquerdaSuave(TIM_HandleTypeDef timer);
 *  void ViraDireitaSuave(TIM_HandleTypeDef timer);
 *
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
 *  Created on: 18 de jul de 2021
 *  Institution: UFMG
 */

#ifndef CARROROBOTICONUCLEO_64_STMF103_H_
#define CARROROBOTICONUCLEO_64_STMF103_H_
#include "stm32f1xx_hal.h"

void AndaFrente(TIM_HandleTypeDef timer);               //move forward
void AndaRe(TIM_HandleTypeDef timer);                   //move backward
void Parar(TIM_HandleTypeDef timer);                    //stop
void ViraDireita90(TIM_HandleTypeDef timer);            //spin rigth 90 degrees
void ViraEsquerda90(TIM_HandleTypeDef timer);           //spin left 90 degrees
void Gira180(TIM_HandleTypeDef timer);                  //spin left 180 degrees
void ViraEsquerdaSuave(TIM_HandleTypeDef timer);        //turn left
void ViraDireitaSuave(TIM_HandleTypeDef timer);         //turn right



#endif /* CARROROBOTICONUCLEO_64_STMF103_H_ */
