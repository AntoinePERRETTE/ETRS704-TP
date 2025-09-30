#include <stdint.h>
#include "stm32f446xx.h"

int main(void)
{

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
	GPIOA->MODER |= 1 << 10;

	while(1){
		for(uint32_t i = 0 ; i<100000; i++);
		GPIOA->ODR ^= 1 << 5;	
	}
}
