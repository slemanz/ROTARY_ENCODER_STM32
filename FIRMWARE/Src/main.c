/*******************************************************************************
 * @author         : William Sleman - visit www.slemanz.com
 * @brief          : Main program body
 ******************************************************************************/

#include "stm32f4.h"
#include "pinout.h"
#include "pin_interface.h"


int main(void)
{
	pinout_init();

	while(1)
	{
		//GPIO_ReadFromInputPin(PORT_ENCA, PIN_ENCA)
		//GPIO_WriteToOutputPin(PORT_LED1, PIN_LED1, GPIO_PIN_SET);
		LED1 = 1;
		LED2 = 1;
		LED3 = 1;
		LED4 = 1;

		for(uint32_t i = 0; i < 600000; i++);

		LED1 = 0;
		LED2 = 0;
		LED3 = 0;
		LED4 = 0;
		for(uint32_t i = 0; i < 600000; i++);

	}
}
