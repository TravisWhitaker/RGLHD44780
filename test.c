#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "hdlcd.h"

int main()
{
	CLKPR = 0x80;
	CLKPR = 0x00;
	DDRD = 0x4E;
	DDRB = 0x0F;
	LEDon;
	lcdinit();
	lcdon();
	Dreg;
	WriteMode;
	PORTB = 0x03;
	HTC();
	PORTB = 0x00;
	HTC();
	while(1)
	{
		lcdon();
		_delay_ms(500);
		lcdoff();
		_delay_ms(500);
	}
	return 0;
}
