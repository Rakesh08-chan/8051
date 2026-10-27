#include <reg52.h>

sbit sw = P1^0;
sbit LED = P2^0;

void delay()
{
    int i,j;

    for(i=0; i<100; i++)
    {
        for(j=0; j<100; j++);
    }
}

void main()
{
    bit state= 0;
	  sw = 1;
    LED = 0;

    while(1)
    {
        if(sw==0)
        {
            delay();
            if(sw== 0)
            {
                state =!state;
                LED = state;
                while(sw == 0)
                {
                }

                delay();
            }
        }
    }
}