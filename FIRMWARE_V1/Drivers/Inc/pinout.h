#ifndef INC_PINOUT_H_
#define INC_PINOUT_H_

#include "stm32f4.h"

/*
 *  PB2 -> ENC A (CLK)
 *  PB1 -> ENC B (DT)
 *  PC12 -> SW
 *
 *  PB12 -> 	PIN0
 *  PB13 -> 	PIN1
 *  PB14 -> 	PIN2
 *  PB15 ->	 	PIN3
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
#define PORT_ENCA	GPIOA
#define PORT_ENCB	GPIOA
#define PORT_SW		GPIOA

#define PORT_PIN0	GPIOB
#define PORT_PIN1	GPIOB
#define PORT_PIN2	GPIOB
#define PORT_PIN3	GPIOB
#define PORT_PIN4	GPIOA

/* Pins definitions */
#define PIN_ENCA	GPIO_PIN_NO_2
#define PIN_ENCB	GPIO_PIN_NO_1
#define PIN_SW		GPIO_PIN_NO_0

#define PIN_PIN0	GPIO_PIN_NO_12
#define PIN_PIN1	GPIO_PIN_NO_13
#define PIN_PIN2	GPIO_PIN_NO_14
#define PIN_PIN3	GPIO_PIN_NO_15
#define PIN_PIN4	GPIO_PIN_NO_8


/*
 *  Pins interface
 */

#define PORTA_OUT ((PORTx_pin_t*)&GPIOA->ODR)
#define PORTB_OUT ((PORTx_pin_t*)&GPIOB->ODR)

#define PORTA_IN ((PORTx_pin_t*)&GPIOA->IDR)

#define D0 (PORTB_OUT->pin12)
#define D1 (PORTB_OUT->pin13)
#define D2 (PORTB_OUT->pin14)
#define D3 (PORTB_OUT->pin15)
#define D4 (PORTA_OUT->pin8)

#define SWITCH (PORTA_IN->pin0)







void pinout_init(void);


#endif /* INC_PINOUT_H_ */
