#include<reg51.h>																	//including required lib's

sbit sw = P1^5;																		//switch is aat a port pin 

void delay(unsigned int);													//forworad decleration of delay function with one paraeter

void main()																				//main function
{
	P2 = 0x00;																			//P2 = 00000000 (all pins are active low)
	
	while(1)																				//forever loop (or we can also use for(;;))
	{
		if(sw == 0) 																	//if (conditional statement), if sw is active low then,
		{
			P2 = 0xFF;                                  //P2 = 11111111 (all 8 pins are active high)
			delay(25);																		//calling delay function with parameter
			P2 = 0x00;                                  //P2 = 00000000 (all 8 pins are active low)
			delay(25);                                   //calling delay function with parameter
		}
		else	if(sw == 1)															//if sw is active high then,																			
		{
			P2 = 0x00;                                  //P2 = 00000000 (all 8 pins are active low)
		}
	}
}

void delay(unsigned int time)										  //defination of delay function with one parameter
{
	unsigned int i,j;																//decleration of variables
	for(i = 0; i < time; i++)												//for loop
	{
		for(j = 0; j<1000; j++);											//nested for loop
	}
}
