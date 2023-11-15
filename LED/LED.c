#include<reg51.h>																				//including required lib's

void main()																							//main function
{
	unsigned int number;																	//decleration of variables
	
	P1 = 0x00;																						//all pins of port are low
	for (number = 0; number <= 40000; number++);       		//delay using for loop
	
	while(1)																							//forever loop (or we can use for(;;))
		{
			P1 = 0xFF;   																			//all pins of port are high
			
			for (number = 0; number <= 40000; number++)       //delay using for loop
			{
				
			}
			
			P1 = 0x00;																				//all pins of port are low
			
			for (number = 0; number <= 40000; number++)		    //delay using for loop
			{
				
			}
		}
}