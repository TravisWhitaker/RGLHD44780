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
	_delay_ms(1);
	lcdon();
	Dreg;
	WriteMode;
	PORTB = 0x03;
	HTC();
	PORTB = 0x00;
	HTC();
	Ireg;
	WriteMode;
	PORTB = 0x0A;
	HTC();
	PORTB = 0x08;
	HTC();
	Dreg;
	WriteMode;
	PORTB = 0x03;
	HTC();
	PORTB = 0x00;
	HTC();
	while(1);
	return 0;
}
