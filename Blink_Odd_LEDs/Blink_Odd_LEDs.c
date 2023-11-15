 #include<reg51.h>																								//including required lib's

void delay(unsigned int);	  														  				//forward decleration of delay function with one parameter
void main()																												//main function
{
		P1 = 0x00;																									
		delay(60);																									  //calling delay function with one parameter
		while(1)
		{
			P1 = 0x01;																									//LED 1
			delay(60);																									//calling delay function with one parameter
			
			P1 = 0x04;																									//LED 3
			delay(60);																									//calling delay function with one parameter
			
			P1 = 0x10;																									//LED 5
			delay(60);																									//calling delay function with one parameter
			
			P1 = 0x40;																									//LED 7
			delay(60);																									//calling delay function with one parameter
		}
}
	
void delay(unsigned int time)														  			  //defination of dealy() function with one parameter
{
	unsigned int i,j;																								//decleration of variables
	for(i = 0; i < time; i ++)																			//for loop
	{
		for(j = 0; j < 1000; j++);																		//nested for loop
	}
}