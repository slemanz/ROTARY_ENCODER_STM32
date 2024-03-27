/*
 * pin_interface.h
 *
 *  Created on: Mar 27, 2024
 *      Author: sleman
 */

#ifndef PIN_INTERFACE_H_
#define PIN_INTERFACE_H_

#include "stm32f4.h"

typedef struct{
	uint32_t pin0  		: 1;
	uint32_t pin1  		: 1;
	uint32_t pin2  		: 1;
	uint32_t pin3  		: 1;
	uint32_t pin4  		: 1;
	uint32_t pin5  		: 1;
	uint32_t pin6  		: 1;
	uint32_t pin7  		: 1;
	uint32_t pin8  		: 1;
	uint32_t pin9 	 	: 1;
	uint32_t pin10  	: 1;
	uint32_t pin11  	: 1;
	uint32_t pin12  	: 1;
	uint32_t pin13  	: 1;
	uint32_t pin14  	: 1;
	uint32_t pin15  	: 1;
	uint32_t reserved  	: 16;
}PORTx_output_t;

#define PORTC_OUT ((PORTx_output_t*)&GPIOC->ODR)

#define LED1 (PORTC_OUT->pin9)
#define LED2 (PORTC_OUT->pin8)
#define LED3 (PORTC_OUT->pin6)
#define LED4 (PORTC_OUT->pin5)



#endif /* PIN_INTERFACE_H_ */
