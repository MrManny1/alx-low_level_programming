#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n : the integer to print
 * Return: 0
*/

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		k = -n;
		_putchar('-');
	}
	else
	{
		k = n;
	}
	if (k >= 10)
	{
		print_number(k / 10);
	}
	_putchar((k % 10) + '0');
}
