/*
 * pinout.h
 *
 *  Created on: Mar 26, 2024
 *      Author: sleman
 */

#ifndef PINOUT_H_
#define PINOUT_H_

#include "stm32f4.h"

/*
 *  PC10 -> ENC A (CLK)
 *  PC11 -> ENC B (DT)
 *  PC12 -> SW
 *
 *  PC9 -> LED1
 *  PC8 -> LED2
 */


/* Ports definitions */
#define PORT_ENCA	GPIOC
#define PORT_ENCB	GPIOC
#define PORT_SW		GPIOC

#define PORT_LED1	GPIOC
#define PORT_LED2	GPIOC

/* Pins definitions */
#define PIN_ENCA	GPIO_PIN_NO_10
#define PIN_ENCB	GPIO_PIN_NO_11
#define PIN_SW		GPIO_PIN_NO_12

#define PIN_LED1	GPIO_PIN_NO_9
#define PIN_LED2	GPIO_PIN_NO_8

void pinout_init(void);


#endif /* PINOUT_H_ */
