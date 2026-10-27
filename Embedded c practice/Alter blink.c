#include<reg52.h>

void delay()
{
	int i, j;
	for(i=0;i<9000;i++)
	{
		for(j=0;j<900;j++);
	}
}
void main()
{
	while(1)
	{
		P1 = 0x55;
		delay ();
		P1 = 0xAA;
		delay ();
	}
}