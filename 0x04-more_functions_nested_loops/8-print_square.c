#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size : the number of squares
 * Return: 0
*/

void print_square(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
