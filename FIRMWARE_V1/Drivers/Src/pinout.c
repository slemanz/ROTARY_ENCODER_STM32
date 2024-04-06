#include "stm32f4.h"


void pinout_init(void)
{

	GPIO_Handle_t GpioPin1;
	GpioLed1.pGPIOx = PORT_PIN1;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = PIN_PIN1;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed1.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

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


	GPIO_PeriClockControl(GPIOC, ENABLE);
	GPIO_Init(&GpioPin1);
	GPIO_Init(&GpioEncA);
	GPIO_Init(&GpioEncB);
	GPIO_Init(&GpioSw);

	GPIO_WriteToOutputPin(PORT_PIN1, PIN_PIN1, GPIO_PIN_RESET);
}
