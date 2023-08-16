#include "main.h"

/**
* jack_bauer - Prints every minute of the day
* from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int m = 0;
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');


			m++;
		}
	}
}
