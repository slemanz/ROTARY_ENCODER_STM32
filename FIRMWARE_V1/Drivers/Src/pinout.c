#include "stm32f4.h"


void pinout_init(void)
{
	GPIO_Handle_t GpioPin0;
	GpioPin0.pGPIOx = PORT_PIN0;
	GpioPin0.GPIO_PinConfig.GPIO_PinNumber = PIN_PIN0;
	GpioPin0.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioPin0.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioPin0.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioPin0.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;


	GPIO_Handle_t GpioPin1;
	GpioPin1.pGPIOx = PORT_PIN1;
	GpioPin1.GPIO_PinConfig.GPIO_PinNumber = PIN_PIN1;
	GpioPin1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioPin1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioPin1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioPin1.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_Handle_t GpioPin2;
	GpioPin2.pGPIOx = PORT_PIN2;
	GpioPin2.GPIO_PinConfig.GPIO_PinNumber = PIN_PIN2;
	GpioPin2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioPin2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioPin2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioPin2.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_Handle_t GpioPin3;
	GpioPin3.pGPIOx = PORT_PIN3;
	GpioPin3.GPIO_PinConfig.GPIO_PinNumber = PIN_PIN3;
	GpioPin3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioPin3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioPin3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioPin3.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

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

	GPIO_Handle_t GpioSw;
	GpioSw.pGPIOx = PORT_SW;
	GpioSw.GPIO_PinConfig.GPIO_PinNumber = PIN_SW;
	GpioSw.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioSw.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioSw.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioSw.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_PIN_PU;

	/*
	 *  Init peripherals pins
	 */

	GPIO_PeriClockControl(GPIOB, ENABLE);

	GPIO_Init(&GpioPin0);
	GPIO_Init(&GpioPin1);
	GPIO_Init(&GpioPin2);
	GPIO_Init(&GpioPin3);
	GPIO_Init(&GpioEncA);
	GPIO_Init(&GpioEncB);
	GPIO_Init(&GpioSw);

	/*
	 *  Initial state of gpio's
	 */

	GPIO_WriteToOutputPin(PORT_PIN0, PIN_PIN0, GPIO_PIN_RESET);
	GPIO_WriteToOutputPin(PORT_PIN1, PIN_PIN1, GPIO_PIN_RESET);
	GPIO_WriteToOutputPin(PORT_PIN2, PIN_PIN2, GPIO_PIN_RESET);
	GPIO_WriteToOutputPin(PORT_PIN3, PIN_PIN3, GPIO_PIN_RESET);
}
