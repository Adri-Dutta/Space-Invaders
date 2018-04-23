#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "ST7735.h"
#include "Random.h"
#include "PLL.h"
#include "ADC.h"
#include "Timer0.h"
#include "SpaceInvaders.h"




///////////SYSTICK//////////////////////////////////////

void Systick_Init(void){
 
 NVIC_ST_CTRL_R = 0;              //disable systick 
 NVIC_ST_RELOAD_R = 0;        //reload value
 NVIC_ST_CURRENT_R = 0;             // clear
 NVIC_SYS_PRI3_R = (NVIC_SYS_PRI3_R & 0x00FFFFFF)| 0x20000000;        //set priority
 NVIC_ST_CTRL_R = 0x0007;          // enable clock, interrupt and enable bit
 NVIC_ST_RELOAD_R = 1333333333;
}




void SysTick_Handler (void)
	{
		uint32_t dummy = 0;
		playerx = ADC_In();
		flag = 1;
		dummy = GPIO_PORTE_DATA_R;
		if ((dummy && 0x01) != 0)
		{
			missileflag = 1;
			GPIO_PORTE_DATA_R &= 0x00;
			
		}
		GPIO_PORTE_DATA_R &= 0x00;
	
	
	
	}
	
