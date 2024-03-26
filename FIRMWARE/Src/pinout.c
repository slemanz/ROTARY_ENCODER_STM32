/*
 *      Author: William Sleman
 */

#include "stm32f4.h"
#include "pinout.h"

void pinout_init(void)
{

	GPIO_Handle_t GpioLed1;
	GpioLed1.pGPIOx = PORT_LED1;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = PIN_LED1;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed1.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_Handle_t GpioLed2;
	GpioLed2.pGPIOx = PORT_LED2;
	GpioLed2.GPIO_PinConfig.GPIO_PinNumber = PIN_LED2;
	GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed2.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;


	GPIO_Handle_t GpioEncA;
	GpioEncA.pGPIOx = PORT_ENCA;
	GpioEncA.GPIO_PinConfig.GPIO_PinNumber = PIN_ENCA;
	GpioEncA.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioEncA.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioEncA.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioEncA.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_Handle_t GpioEncB;
	GpioEncB.pGPIOx = PORT_ENCB;
	GpioEncB.GPIO_PinConfig.GPIO_PinNumber = PIN_ENCB;
	GpioEncB.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioEncB.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioEncB.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioEncB.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;






	GPIO_PeriClockControl(GPIOC, ENABLE);
	GPIO_Init(&GpioLed1);
	GPIO_Init(&GpioLed2);
	GPIO_Init(&GpioEncA);
	GPIO_Init(&GpioEncB);

	GPIO_WriteToOutputPin(PORT_LED1, PIN_LED1, GPIO_PIN_RESET);
	GPIO_WriteToOutputPin(PORT_LED2, PIN_LED2, GPIO_PIN_RESET);
}