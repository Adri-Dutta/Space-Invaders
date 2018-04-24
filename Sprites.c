#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "ST7735.h"
#include "Random.h"
#include "PLL.h"
#include "ADC.h"
#include "Sprites.h"





//typedef struct sprites
//{
//	int16_t x;
//	int16_t y;
//	const unsigned short *mappt;
//	int16_t w;
//	int16_t h;
//	uint8_t status;             //1 alive, 0 dead
//	
//	
//} typealien;
typechar alien[16] = {
{ 16,10 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 32,10 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 48,10 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 64,10 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},
{ 16,21 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 32,21 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 48,21 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 64,21 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},
{ 16,32 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 32,32 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 48,32 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 64,32 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},
{ 16,43 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 32,43 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 48,43 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1},{ 64,43 , {SmallEnemy30pointA,SmallEnemy30pointAempty}, 16, 10, 1}
};

typechar ship ={63, 159, {PlayerShip0, PlayerShip0}, 30,8, 1};



typechar bullet = {63, 151, {Missile0, Missile0empty}, 4, 9, 0,};

