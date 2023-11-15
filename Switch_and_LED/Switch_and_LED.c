#include<reg51.h>																				//including header file-lib

sbit LED = P1^5;																				//LED label 
sbit SW = P1^3;																					//SWITCH label

void delay(unsigned int);																//forword decleartion of delay() function 

void main()																							//main function
{
	LED = 0;																						//off LED
	
	while(1)
{
	
	if(SW == 0)																						//if switch is at active low
	{
		delay(10);
		LED = 1;																						//on LED
		delay(10);

	}
	else if(SW == 1)																			//else switch is at active high
	{
		delay(10);
		LED = 0;																						//off LED
				delay(10);

	}
}
}


void delay(unsigned int time)														//defination of delay() function
{
	unsigned int i ,j;
	for(i = 0; i < time; i++)
	{
		for(j = 0; j < 1000; j++)
		{
			
		}
	}
}