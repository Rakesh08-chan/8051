#include <reg52.h>

sbit LED1 = P1^0;
sbit LED2 = P1^1;
sbit SW = P3^2;

bit blink = 0;
unsigned char count = 0;

void timer0_ISR(void) interrupt 1
{
	TH0 = 0xDC;
	TL0 = 0x00;
	
	if(blink)
	{
		count++;
		if(count == 50)
		{
			count = 0;
      LED1 = !LED1;
      LED2 = !LED2;
		}
	}
	else
	{
		LED1 = 0;
		LED2 = 0;
	}
}
void main()
{
	LED1 = 0;
	LED2 = 0;
	SW = 1;
	
	TMOD = 0x01;
	TH0 = 0xDC;
	TL0 = 0x00;
	
	ET0 = 1;
	EA = 1;
	TR0  = 1;
	
	while(1)
	{
		if(SW == 0)
		{
			blink = !blink;
			while(SW == 0);
		}
	}
}
	