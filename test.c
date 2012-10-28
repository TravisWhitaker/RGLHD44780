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
	while(1);
	return 0;
}
