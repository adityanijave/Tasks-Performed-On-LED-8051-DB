#include<reg51.h>																							//including required lib's

void main()																										//main function
{
	unsigned int count;																			    //decleration of variables
	P1 = 0x00;																									//initialization of port with 00000000
	for(count = 0; count <= 40000; count++);									  //delay using for loop
	while(1)																										//forever loop (or we can us for(;;))
	{
		P1 = 0x02;																								//P1 = 00000010
		for(count = 0; count <= 40000; count++);									//delay using for loop
		
		P1 = 0x08;																								//P1 = 00001000
		for(count = 0; count <= 40000; count++);									//delay using for loop
		
		P1 = 0x20;																								//P1 = 00100000
		for(count = 0; count <= 40000; count++);									//delay using for loop
		
		P1 = 0x80;																								//P1 = 10000000
		for(count = 0; count <= 40000; count++);									//delay using for loop
	}
}