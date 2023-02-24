#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n : the number of times the diagonal line is to be printed
 * Return: 0
*/

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < c; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
