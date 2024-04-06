#include "stm32f4.h"


int main(void)
{
	GPIO_Handle_t GpioLed1;
	GpioLed1.pGPIOx = GPIOA;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_2;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed1.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GpioLed1);


	while(1)
	{
		GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_2, 1);
		for(uint32_t i = 0; i <= 500000; i++);
		GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_2, 0);
		for(uint32_t i = 0; i <= 500000; i++);
	}
}
