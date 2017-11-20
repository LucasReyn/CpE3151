#include "uart.h"
#include "reg932.h"

sbit green = P2^3; // green button
sbit amber = P2^2; // amber button
sbit yellow = P2^1; // yellow button
sbit red = P2^0; // red button


void main()
{
	uart_init();
	P2M1 = 0x00;
	while(1)
	{
		if(green == 0)
		{
			uart_transmit('L');
			uart_transmit('U');
			uart_transmit('C');
			uart_transmit('A');
			uart_transmit('S');

			while(green == 0);

		}

		if(amber == 0)
		{
			uart_transmit('G');
			uart_transmit('E');
			uart_transmit('T');
			uart_transmit('S');
	
			while(amber == 0);

		}

		if(yellow == 0)
		{
			uart_transmit('A');
			uart_transmit('N');

			while(yellow == 0);

		}

		if(red == 0)
		{
			uart_transmit('A');
			uart_transmit('+');

			while(red == 0);

		}
	}
}
