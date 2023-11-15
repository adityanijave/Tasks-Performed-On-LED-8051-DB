//including required lib's
#include<reg51.h>

//main functions
void main()
{
	//declerations of variables (local variables)
	unsigned int number;
	
 	P2 = 0x00;
	
	while (1)																																		//forever loop (or we can use for(;;))
	{
		P2 = 0x01;       																													// LED 1
		for(number = 0; number <= 10000; number++)																//delay using for loop
		{
		
		}
		P2 = 0x02;       																													// LED 2
		for(number = 0; number <= 10000; number++)																//delay using for loop
		{
		
		}
		P2 = 0x04;       																													// LED 3
		for(number = 0; number <= 10000; number++)																//delay using for loop
		{
		
		}
		P2 = 0x08;       																													// LED 4
		for(number = 0; number <= 10000; number++)																//delay using for loop
		{
		
		}
		P2 = 0x10;       																													// LED 5
		for(number = 0; number <= 10000; number++)																//delay using for loop
		{
		
		}
		P2 = 0x20;       																													// LED 6
		for(number = 0; number <= 10000; number++)																//delay using for loop
		{
		
		}
		P2 = 0x40;       																													// LED 7
		for(number = 0; number <= 10000; number++)																//delay using for loop
		{
		
		}
		P2 = 0x80;       																													// LED 8
		for(number = 0; number <= 10000; number++)																//delay using for loop
		{
		
		}
	}
}