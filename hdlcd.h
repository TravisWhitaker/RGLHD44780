#define LEDon PORTD |= (1<<6)
#define LEDoff PORTD &= ~(1<<6)
#define Dreg PORTD |= (1<<1) //RS - D1$
#define Ireg PORTD &= ~(1<<1) //RS - D1$
#define ReadMode PORTD |= (1<<2) //R/W - D2$
#define WriteMode PORTD &= ~(1<<2) //R/w - D2$
#define ClockUp PORTD |= (1<<3) //E(clock) - D3$
#define ClockDown PORTD &= ~(1<<3) //E(clock) - D3

void HTC();
void lcdinit();
void lcdclear();
void lcdon();
void lcdoff();
