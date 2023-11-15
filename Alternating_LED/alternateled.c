#include<reg51.h>																																								//including required lib's

void main()																																											//main function
{
	unsigned int number;																																					//decleration of variables
	
	P2 = 0x00;																																										//initialization of port
	for (number = 0; number <= 40000; number++);		    																			    //delay using for loop
	while(1)																																											//forever loop (or we cn use for(;;))
		{
			P2 = 0x55;   																																							//0x55 = 01010101
			for (number = 0; number <= 40000; number++);       																				//delay using for loop
			
			P2 = 0xAA;																																								//0xAA = 10101010
			for (number = 0; number <= 40000; number++);		    																			//delay using for loop
		}
}