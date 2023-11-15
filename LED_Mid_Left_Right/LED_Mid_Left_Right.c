#include <REGX51.H> 										//including required lib's

//sbit declerations
sbit L1 = P2^0;													//LED 1 at PIN 0 of port
sbit L2 = P2^1;													//LED 2 at PIN 1 of port
sbit L3 = P2^2;													//LED 3 at PIN 2 of port
sbit L4 = P2^3;													//LED 4 at PIN 3 of port
sbit L5 = P2^4;													//LED 5 at PIN 4 of port
sbit L6 = P2^5;													//LED 6 at PIN 5 of port
sbit L7 = P2^6;													//LED 7 at PIN 6 of port
sbit L8 = P2^7;													//LED 8 at PIN 7 of port

sbit sw = P1^0;													//Switch at pin port another port

//forward decleration of user defined functions
void delay(unsigned int);								//delay function with one parameter

void main()															//main function
{
	P2 = 0x00;														//all pins are low at start 
	
	while(1)															//forever loop (or we can use for(;;))
	{
		if(sw == 0)												  //if sw is active low then,
		{
			delay(5);													//calling delay function
			
			L5 = 1;														//turn on the LED
			delay(500);												//calling delay function
			
			L6 = 1;														//turn on the LED
			delay(500);												//calling delay function
			
			L7 = 1;														//turn on the LED
			delay(500);												//calling delay function
			
			L8 = 1;														//turn on the LED
			delay(500);												//calling delay function
			
			L4 = 1;														//turn on the LED
			delay(500);												//calling delay function
			
			L3 = 1;														//turn on the LED
			delay(500);												//calling delay function
			
			L2 = 1;														//turn on the LED
			delay(500);												//calling delay function
			
			L1 = 1;														//turn on the LED
			delay(500);												//calling delay function
		}
		else																//else then,
		{
			//turn off all LEDs 
			L1 = 0;
			L2 = 0; 
			L3 = 0; 
			L4 = 0; 
			L5 = 0; 
			L6 = 0; 
			L7 = 0; 
			L8 = 0;
		}
	}
}


//function defination

void delay(unsigned int time)
{
	unsigned int i,j;												//decleration of variables
	for(i = 0; i < time; i++)								//for loop
	{
		for(j = 0; j < 1000; j++);							//nested for loop
	}
}