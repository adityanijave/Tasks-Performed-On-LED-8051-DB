//including required lib's
#include <REGX51.H>

//sbit decleration for leds
sbit L1 = P1^0;
sbit L2 = P1^1;
sbit L3 = P1^2;
sbit L4 = P1^3;
sbit L5 = P1^4;
sbit L6 = P1^5;
sbit L7 = P1^6;
sbit L8 = P1^7;

//forword declearation of functions
void delay(unsigned int);                  //delay function with one parameter

void light18();														 //function to on 0th pin led and 7th pin led
void black18();														 //function to off 0th pin led and 7th pin led

void light27();														 //function to on 1st pin led and 6th pin led
void black27();														 //function to off 1st pin led and 6th pin led

void light36();														 //function to on 2nd pin led and 5th pin led
void black36();														 //function to off 2nd pin led and 5th pin led

void light45();														 //function to on 3rd pin led and 4th pin led
void black45();														 //function to off 3rd pin led and 4th pin led

void L18B45();														 //function to on 0 pin led and 7 pin led & off 3 pin and 4 pin
void L27B18();														 //function to on 1 pin led and 6 pin led & off 0 pin and 7 pin
void L36B27();														 //function to on 2 pin led and 5 pin led & off 1 pin and 6 pin
void L45B36();														 //function to on 3 pin led and 4 pin led & off 2 pin and 5 pin
void L18B45L27B18L36B27L45B36();					 //combination of all function for know how function in fuction work

void main()																 //main function
{
	P1 = 0x00;															 //all pins are active low
	while(1)																 //forever loop (or we can use for(;;))
	{
		L18B45L27B18L36B27L45B36();						 //calling function
	}
}


//defination of the all user defined function
void light18()									          						
{
		L1 = 1;
		L8 = 1;
}

void black18()
{
		L1 = 0;
		L8 = 0;
}

void light27()
{
		L2 = 1;
		L7 = 1;
}

void black27()
{
		L2 = 0;
		L7 = 0;
}

void light36()
{
		L3 = 1;
		L6 = 1;
}

void black36()
{
		L3 = 0;
		L6 = 0;
}

void light45()
{
		L4 = 1;
		L5 = 1;
}

void black45()
{
		L4 = 0;
		L5 = 0;
}

void L18B45()
{
	light18();
	black45();
	delay(500);																		//calling delay function with one arugement
}

void L27B18()
{
	
			light27();
			black18();
			delay(500);																//calling delay function with one arugement
}

void L36B27()
{
			light36();
			black27();
			delay(500);																//calling delay function with one arugement
}

void L45B36()
{
			light45();
			black36();
			delay(500);																//calling delay function with one arugement
}

void L18B45L27B18L36B27L45B36()
{
		L18B45();	
		L27B18();
		L36B27();	
		L45B36();
}

void delay(unsigned int time)
{
	unsigned int i,j;
	{
		for(i = 0; i < time; i++)
		{
			for(j = 0; j < 1000; j++);
		}
	}
}
