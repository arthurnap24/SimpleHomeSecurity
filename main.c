#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
  //here, you set up the which pins of the ATTiny85 is input/output
  //0=input, 1=output
  DDRB = 0b00000010;
  
  //loop of the program (analous to loop() of arduino:
  while (1)
  {
    //check if PB0 is high, if so, buzzer rings
    if ((PINB & 1) == 1)
	{
	  PORTB = 0b00000010;
	}
	//else if low, buzzer stops
	else if ((PINB & 1) == 0)
	{
	  PORTB = 0b00000000;
	}
	//_delay_ms(100);
	//PORTB = 0b00000000;
	//_delay_ms(100);
  }
  
  return 1;
  
}