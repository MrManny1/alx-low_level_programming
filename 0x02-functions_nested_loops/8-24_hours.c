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
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
