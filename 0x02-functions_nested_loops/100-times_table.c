#include "main.h"

/**
 * print_times_table - print the n times table, starting with 0
 *
 * @n : times table to use
 * Return: 0
*/
void print_times_table(int n)
{
	int c = 0, rep, d;

	if (n < 0 || n > 15)
		return;

	while (c <= n)
	{
		for (d = 0; d <= n; d++)
		{
			rep = c * d;
			if (d == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep % 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (d < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		c++;
	}
}
