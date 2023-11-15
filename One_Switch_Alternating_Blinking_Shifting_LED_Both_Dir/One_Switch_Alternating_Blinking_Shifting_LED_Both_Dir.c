#include <REGX51.H>																								//including required lib's

//sbit declerations
sbit sw = P1^0;																										//Switch is at port 1 pin 0

//forword declerations of user defined functions
void alternating_LED();																						//function for alternate leds blink
void blinking_LED();																							//function for blinking leds
void shifting_left_to_right();																		//function for turn on leds from left to right
void shifting_right_to_left();																		//function for turn on leds from right to left
void delay(unsigned int);																					//delay function with one parameter

void main()																												//main function
{
	unsigned int flag;																							//decleration of variables
	
	//initializations
	sw = 1;
	P3 = 0x00;
	
	while(1)																												//forever loop (or we can use for(;;))
	{
		if(sw == 0 && flag == 0)																			//if switch is active low and value of flag is equal to 0 then,
		{
			delay(100);																									//calling delay function with 100
			alternating_LED();																					//calling alternating_LED()
			flag=1;																											//assign value 1 to variable flag
			
		}
		
		else if(sw == 0 && flag == 1)																	//else if switch is active low and value of flag is equal to 1 then,
		{
			delay(100);																									//calling delay function with 100
			blinking_LED();																							//calling blinking_LED()
			flag = 2;																										//assign value 2 to variable flag
		}
		
		else if(sw == 0 && flag == 2)																	//else if switch is active low and value of flag is equal to 2 then,
		{
			delay(100);																									//calling delay function with 100
			shifting_left_to_right();																		//calling shifting_left_to_right()
			flag = 3;																										//assign value 3 to variable flag
		}
		
		else if(sw == 0 && flag == 3)																	//else if switch is active low and value of flag is equal to 3 then,
		{
			delay(100);																									//calling delay function with 100
			shifting_right_to_left();																		//calling shifting_right_to_left()
			flag = 4;																										//assign value 4 to variable flag
		}
		
		else if(sw == 0 && flag == 4)																	//else if switch is active low and value of flag is equal to 4 then,
		{
			delay(100);																									//calling delay function with 100
			P3 = 0x00;																									//all pins of port will be active low (i.e., off state)
			flag = 0;																										//assign value 0 to variable flag to create an loop
		}
		
	}
}


//functions definations of user defined functions
void alternating_LED()
{
	P3 = 0x55;																										//P3 = 01010101
	delay(250);																										//calling delay function with 250
			
	P3 = 0xAA;																										//P3 = 10101010
	delay(250);																										//calling delay function with 250
}

void shifting_right_to_left()
{
	
	P3 = 0x01;																										//P3 = 00000001
	delay(25);																										//calling delay function with 25
		
	P3 = 0x02;																										//P3 = 00000010
	delay(25);																										//calling delay function with 25
		
	P3 = 0x04;																										//P3 = 00000100
	delay(25);																										//calling delay function with 25
		
	P3 = 0x08;																										//P3 = 00001000
	delay(25);																										//calling delay function with 25
		
	P3 = 0x10;																										//P3 = 00010000
	delay(25);																										//calling delay function with 25
		
	P3 = 0x20;																										//P3 = 00100000
	delay(25);																										//calling delay function with 25
		
	P3 = 0x40;																										//P3 = 01000000
	delay(25);																										//calling delay function with 25
		
	P3 = 0x80;																										//P3 = 10000000
	delay(25);																										//calling delay function with 25
}
	
void shifting_left_to_right()
{
		
	P3 = 0x80;																										//P3 = 10000000
	delay(25);																										//calling delay function with 25
	
	P3 = 0x40;																										//P3 = 01000000
	delay(25);																										//calling delay function with 25
	
	P3 = 0x20;																										//P3 = 00100000
	delay(25);																										//calling delay function with 25
	
	P3 = 0x10;																										//P3 = 00010000
	delay(25);																										//calling delay function with 25
	
	P3 = 0x08;																										//P3 = 00001000
	delay(25);																										//calling delay function with 25
	
	P3 = 0x04;;																										//P3 = 00000100
	delay(25);																										//calling delay function with 25
	
	P3 = 0x02;;																										//P3 = 00000010
	delay(25);																										//calling delay function with 25
	
	P3 = 0x01;;																										//P3 = 00000001
	delay(25);																										//calling delay function with 25
}

void blinking_LED()
{
	P3 = 0x00;;																										//P3 = 00000000 (all pins are low)
	delay(25);																										//calling delay function with 25
	
	P3 = 0xFF;;																										//P3 = 11111111 (all pins are high)
	delay(25);																										//calling delay function with 25
}



void delay(unsigned int time)
{
	unsigned int i,j;																							//decleration of variables
	for(i = 0; i < time; i++)																			//for loop
	{
		for(j = 0; j < 1000; j++);																	//nested for loop
	}
}