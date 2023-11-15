//including required lib's
#include<reg51.h>

//main function
void main(){
	
	//initialization and declerations
	unsigned int number = 0;
	
	P3 = 0x00;
	
	while (1)																																	//forever loop (or we can for(;;))
	{
		P3 = 0x80;       																												// LED 1
		
		for(number = 0; number <= 60000; number++);															// Delay using for loop
	
		P3 = 0x40;       																												// LED 2
			
		for(number = 0; number <= 60000; number++);															// Delay using for loop
		
		P3 = 0x20;       																												// LED 3
			
		for(number = 0; number <= 60000; number++);															// Delay using for loop
		
		P3 = 0x10;       																												// LED 4
			
		for(number = 0; number <= 60000; number++); 													  // Delay using for loop
		
		P3 = 0x08;       																												// LED 5
			
		for(number = 0; number <= 60000; number++);															// Delay using for loop
		
		P3 = 0x04;       																												// LED 6
			
		for(number = 0; number <= 60000; number++);															// Delay using for loop
		
		P3 = 0x02;       																												// LED 7
			
		for(number = 0; number <= 60000; number++);															// Delay using for loop
		
		P3 = 0x01;       																												// LED 8
			
		for(number = 0; number <= 60000; number++);															// Delay using for loop
	
	}
}
