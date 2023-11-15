//including required lib's
#include <REGX51.H>

//sbit declerations
sbit sw = P1^0;																								//sbit for switch
sbit Led = P1^7;																							//sbit for LED

//forward declearation of user defined functions
void delay(unsigned int);																			//delay function with one parameter

void main()																										//main function
{
	//initialization
	Led = 0;																										//LED is turn OFF (at start)
	
	while(1)																										//forever loop (or we can use for(;;))
	{
		if(sw == 0)																								//if switch is active low then,
		{
			Led = ~Led;																							//LED = 0, then negation of LED is 1 and it is assign to again LED, so that LED = 1
			delay(100);																							//calling delay function with 100
		}
	}
}


//function defination of user defined functions
void delay(unsigned int time)																	//delay function with one parameter called time
{
	unsigned int i,j;																						//decleration of variables
	
	for(i = 0; i < time; i++)																		//for looop
	{
		for(j = 0; j < 1000; j++);																//nested for looop
	}
}