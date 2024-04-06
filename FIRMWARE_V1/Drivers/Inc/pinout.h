#ifndef INC_PINOUT_H_
#define INC_PINOUT_H_

#include "stm32f4.h"

/*
 *  PC10 -> ENC A (CLK)
 *  PC11 -> ENC B (DT)
 *  PC12 -> SW
 *
 *  PC9 -> PIN1
 *  PC8 -> LED2
 *  PC6 -> LED3
 *  PC5 -> LED4
 */

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




/* Ports definitions */
#define PORT_ENCA	GPIOC
#define PORT_ENCB	GPIOC
#define PORT_SW		GPIOC

#define PORT_PIN1	GPIOC
#define PORT_LED2	GPIOC
#define PORT_LED3	GPIOC
#define PORT_LED4	GPIOC

/* Pins definitions */
#define PIN_ENCA	GPIO_PIN_NO_10
#define PIN_ENCB	GPIO_PIN_NO_11
#define PIN_SW		GPIO_PIN_NO_12

#define PIN_PIN1	GPIO_PIN_NO_9
#define PIN_LED2	GPIO_PIN_NO_8
#define PIN_LED3	GPIO_PIN_NO_6
#define PIN_LED4	GPIO_PIN_NO_5


/*
 *  Pins interface
 */


#define PORTA_OUT ((PORTx_pin_t*)&GPIOA->ODR)
#define PORTC_IN ((PORTx_pin_t*)&GPIOC->IDR)

#define PIN_OUT1 (PORTA_OUT->pin2)

#define SWITCH (PORTC_IN->pin12)







void pinout_init(void);


#endif /* INC_PINOUT_H_ */
