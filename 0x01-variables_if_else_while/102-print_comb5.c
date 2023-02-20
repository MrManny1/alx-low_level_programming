#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - software and the world
 *
 * Return: 0
*/
int main(void)
{
	int c = 0;
	int a_d;
	int l_d;

	int c2;
	int a_d2;
	int l_d2;

	while (c <= 98)
	{
		a_d = (c / 10 + '0');
		l_d = (c % 10 + '0');
		c2 = 0;
		while (cz <= 99)
		{
			a_d2 = (c2 / 10 + '0');
			l_d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(a_d);
				putchar(l_d);
				putchar(' ');
				putchar(a_d2);
				putchar(l_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
