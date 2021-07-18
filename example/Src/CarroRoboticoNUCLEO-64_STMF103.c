/*
 * CarroRoboticoNUCLEO-64_STMF103.c
 *
 *  Created on: 18 de jul de 2021
 *      Authors: Bruno Guimarães Bitencourt and Ian Fernandes Miranda
 */

#include "CarroRoboticoNUCLEO-64_STMF103.h"
#include "main.h"

static void setPWM(TIM_HandleTypeDef, uint32_t, uint16_t, uint16_t);


void AndaFrente(TIM_HandleTypeDef timer){

	setPWM(timer, TIM_CHANNEL_1, 1023, 512);
	setPWM(timer, TIM_CHANNEL_2, 1023, 0);
	setPWM(timer, TIM_CHANNEL_3, 1023, 525);
	setPWM(timer, TIM_CHANNEL_4, 1023, 0);

}


void AndaRe(TIM_HandleTypeDef timer){
	setPWM(timer, TIM_CHANNEL_1, 1023, 0);
	setPWM(timer, TIM_CHANNEL_2, 1023, 512);
	setPWM(timer, TIM_CHANNEL_3, 1023, 0);
	setPWM(timer, TIM_CHANNEL_4, 1023, 520);

}

void Parar(TIM_HandleTypeDef timer){
	setPWM(timer, TIM_CHANNEL_1, 1023, 0);
	setPWM(timer, TIM_CHANNEL_2, 1023, 0);
	setPWM(timer, TIM_CHANNEL_3, 1023, 0);
	setPWM(timer, TIM_CHANNEL_4, 1023, 0);
}


void ViraEsquerda90(TIM_HandleTypeDef timer){
	setPWM(timer, TIM_CHANNEL_1, 1023, 480); 
	setPWM(timer, TIM_CHANNEL_2, 1023, 0);
	setPWM(timer, TIM_CHANNEL_3, 1023, 0); 
	setPWM(timer, TIM_CHANNEL_4, 1023, 480);
	HAL_Delay(350);

}



void ViraDireita90(TIM_HandleTypeDef timer){
	setPWM(timer, TIM_CHANNEL_1, 1023, 0); 
	setPWM(timer, TIM_CHANNEL_2, 1023, 480); 
	setPWM(timer, TIM_CHANNEL_3, 1023, 480); 
	setPWM(timer, TIM_CHANNEL_4, 1023, 0); 
	HAL_Delay(350);
}


void Gira180(TIM_HandleTypeDef timer){
	setPWM(timer, TIM_CHANNEL_1, 1023, 480); 
	setPWM(timer, TIM_CHANNEL_2, 1023, 0); 
	setPWM(timer, TIM_CHANNEL_3, 1023, 0); 
	setPWM(timer, TIM_CHANNEL_4, 1023, 480); 
	HAL_Delay(1200);
}


void ViraEsquerdaSuave(TIM_HandleTypeDef timer){
	setPWM(timer, TIM_CHANNEL_1, 1023, 480);
	setPWM(timer, TIM_CHANNEL_2, 1023, 0);
	setPWM(timer, TIM_CHANNEL_3, 1023, 350);
	setPWM(timer, TIM_CHANNEL_4, 1023, 0);
	HAL_Delay(350);
}



void ViraDireitaSuave(TIM_HandleTypeDef timer){
	setPWM(timer, TIM_CHANNEL_1, 1023, 350);
	setPWM(timer, TIM_CHANNEL_2, 1023, 0);
	setPWM(timer, TIM_CHANNEL_3, 1023, 480);
	setPWM(timer, TIM_CHANNEL_4, 1023, 0);
	HAL_Delay(350);
}



void setPWM(TIM_HandleTypeDef timer, uint32_t channel, uint16_t period, uint16_t pulse){
	 HAL_TIM_PWM_Stop(&timer, channel); // stop generation of pwm
	 TIM_OC_InitTypeDef sConfigOC;
	 timer.Init.Period = period; // set the period duration
	 HAL_TIM_PWM_Init(&timer); // reinititialise with new period value
	 sConfigOC.OCMode = TIM_OCMODE_PWM1;
	 sConfigOC.Pulse = pulse; // set the pulse duration
	 sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	 sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	 HAL_TIM_PWM_ConfigChannel(&timer, &sConfigOC, channel);
	 HAL_TIM_PWM_Start(&timer, channel); // start pwm generation
}




