#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "ST7735.h"
#include "Random.h"
#include "PLL.h"
#include "ADC.h"
#include "Timer0.h"
#include "ISR.h"
#include "Portinit.h"
#include "Sprites.h"
#include "Timer1.h"



void Collision (void)
{
	uint8_t index = 0;
	uint8_t xindex = 0;
	uint8_t nxindex = 0;
	uint8_t flagx = 0;
	uint8_t flagy = 0;
	
	
	if (bullet.status == 1)
	{
	while (index < 16)
	{
		while (xindex <16)                     //check right
		{
			if ((alien[index].status ==1) && (alien[index].x +xindex) == bullet.x)
			{
				flagx = 1;
			}
				xindex++;
		}	
		
//		while (nxindex <4)                           //check left
//		{
//				if ((alien[index].status ==1)&&(alien[index].x - nxindex) == bullet.x)
//				{
//					flagx = 1;
//				}
//					nxindex++;
//		}
		
		
		if ((alien[index].status ==1) && (alien[index].y == bullet.y))              //check y position
		{
			flagy = 1;
		}
		
		if ((flagx == 1) && (flagy == 1))
		{
			alien[index].status = 0;
			bullet.status = 0;
		}

		
		
			index++;
			xindex = 0;
			nxindex = 0;
			flagx = 0;
			flagy = 0;
			
	}
	
		
	
	
	
}

}

