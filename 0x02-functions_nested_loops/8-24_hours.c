#include "main.h"

/**
* jack_bauer - Prints every minute of the day
* from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int hour = 0;

	while (hour < 24)
	{
		int minute = 0;

		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');


			minute++;
		}
	}
}
