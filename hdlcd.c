#include <arv/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define LEDon PORTD |= (1<<6)
#define LEDoff PORTD &= ~(1<<6)
#define Ireg PORTD |= (1<<1)
#define Dreg PORTD &= ~(1<<1)
#define WriteMode PORTD |= (1<<2)
#define ReadMode PORTD &= ~(1<<2)
#define ClockUp PORTD |= (1<<3)
#define ClockDown PORTD &= ~(1<<3)


