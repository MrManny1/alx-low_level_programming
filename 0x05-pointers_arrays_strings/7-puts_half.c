#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		b++;
	}
	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b += 1;
	}
	else
	{
		b = a / 2;
	}

	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
