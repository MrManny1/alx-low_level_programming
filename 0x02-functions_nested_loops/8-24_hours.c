#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 *
 * Return:0
*/

void jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			int tens_hour = hour / 10;
			int ones_hour = hour % 10;
			int tens_minute = minute / 10;
			int ones_minute = minute % 10;

			_putchar('0' + tens_hour);
			_putchar('0' + ones_hour);
		       	_putchar(':');
			_putchar('0' + tens_minute);
			_putchar('0' + ones_minute);
			_putchar('\n');
			return (0);
		}
	}
}

