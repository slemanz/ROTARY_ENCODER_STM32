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
	__vo uint32_t pin0  		: 1;
	__vo uint32_t pin1  		: 1;
	__vo uint32_t pin2  		: 1;
	__vo uint32_t pin3  		: 1;
	__vo uint32_t pin4  		: 1;
	__vo uint32_t pin5  		: 1;
	__vo uint32_t pin6  		: 1;
	__vo uint32_t pin7  		: 1;
	__vo uint32_t pin8  		: 1;
	__vo uint32_t pin9 	 		: 1;
	__vo uint32_t pin10  		: 1;
	__vo uint32_t pin11  		: 1;
	__vo uint32_t pin12  		: 1;
	__vo uint32_t pin13  		: 1;
	__vo uint32_t pin14  		: 1;
	__vo uint32_t pin15  		: 1;
	__vo uint32_t reserved  	: 16;
}PORTx_pin_t;

#define PORTC_OUT ((PORTx_pin_t*)&GPIOC->ODR)
#define PORTC_IN ((PORTx_pin_t*)&GPIOC->IDR)

#define PIN_OUT1 (PORTC_OUT->pin9)
#define PIN_OUT2 (PORTC_OUT->pin8)
#define PIN_OUT3 (PORTC_OUT->pin6)
#define PIN_OUT4 (PORTC_OUT->pin5)

#define SWITCH (PORTC_IN->pin12)




void pin_counterSet(int16_t value);



#endif /* PIN_INTERFACE_H_ */
