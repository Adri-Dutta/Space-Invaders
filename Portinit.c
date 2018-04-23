#include <stdint.h>
#include "tm4c123gh6pm.h"

void PortF_Init(void);
void PortE_Init (void);

///////PORTF/////////////////

uint32_t delay;
void PortF_Init(void){
// Intialize PortF for hearbeat
	
	SYSCTL_RCGCGPIO_R |= 0x20;
	
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	
	GPIO_PORTF_DIR_R |= 0x06;
	GPIO_PORTF_AFSEL_R &= ~0x06; 
	GPIO_PORTF_DEN_R |= 0x06; 
	GPIO_PORTF_PCTL_R = (GPIO_PORTF_PCTL_R&0xFFFFF0FF)+0x00000000;
	GPIO_PORTF_AMSEL_R = 0; 

}





//////////PORTE/////////////

void PortE_Init (void)
{
	SYSCTL_RCGCGPIO_R |= 0x10;
	
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	delay++;
	
	
	GPIO_PORTE_DIR_R &= ~0x01;
	GPIO_PORTE_DEN_R |= 0x01;
	
	
}
