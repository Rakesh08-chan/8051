#include <reg52.h>

sbit SW = P1^0;
sbit LED = P2^0;
void main()
{
    SW = 0;

    while(1)
    {
        if(SW == 0)
        {
            LED = 1;        
				}
        else
        {
            LED = 0;
        }
    }
}