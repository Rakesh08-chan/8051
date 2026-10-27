#include<reg52.h>

	sbit SW1 = P1^0;
	sbit SW2 = P1^1;
	
	sbit LED1 = P2^0;
	sbit LED2 = P2^1;
	
	void main()
{
	while(1)
	{
		SW1 = 0;
		SW2 = 0;
		
		if(SW1 == 0)
		{
			LED1 = 1;
		}
		else
		{
			LED1 = 0;
		}
		
		if(SW2 == 0)
		{
			LED2 = 1;
		}
		else
		{
			LED2 = 0;
		}
	}
}
		
		