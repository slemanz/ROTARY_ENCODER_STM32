/*******************************************************************************
 * @author         : William Sleman - visit www.slemanz.com
 * @brief          : Main program body
 ******************************************************************************/

#include "stm32f4.h"
#include "pinout.h"

void delay(void)
{
	for(uint32_t i = 0; i < 1500000; i++);
}


int main(void)
{
	pinout_init();

	while(1)
	{
		GPIO_ToggleOutputPin(PORT_LED1, PIN_LED1);
		GPIO_ToggleOutputPin(PORT_LED2, PIN_LED2);
		delay();
	}
}
