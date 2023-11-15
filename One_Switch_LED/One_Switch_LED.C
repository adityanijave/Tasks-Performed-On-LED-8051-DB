//including required lib's
#include <REGX51.H>

//sbit declerations
sbit sw = P1^0;
sbit LED = P1^7;

//forword decleration of user defined function 
void delay(unsigned int);                             //delay function with one parameter

void main()																						//main function
{
	//decleration of variables (local variables)
	unsigned int flag;
	
	//initialization
	LED = 0;				
	
	while(1)																						//forever loop (or we can use for(;;))
	{
		if(sw == 0 && flag == 0 )													//if switch is active low and flag is equal to 0 then,
		{ 
			delay(100);																			//calling delay function with 100
			LED = 1;																				//LED will turn ON
			flag = 1;																				//assigning value 1 to variable flag
		}
		else if (sw == 0 && flag == 1)										//else if switch is active low and flag is equal to 1 then,
		{
			delay(100);																			//calling delay function with 100
			LED = 0;																				//LED will turn OFF
			flag = 0;																				//assigning value 0 to variable flag to creat a loop
		}
	}
}


//function defination of user defined functions
void delay(unsigned int time)													//delay function with one parameter called timme
{
	unsigned int i,j;																		//decleration of variables
	for(i = 0; i < time; i++)														//for loop
	{
		for(j = 0; j < 1000; j++);												//nested for loop
	}
}