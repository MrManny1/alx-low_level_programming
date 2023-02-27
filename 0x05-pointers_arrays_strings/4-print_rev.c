#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line
 * @s: string
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int longl = 0;
	int a;

	while (*s != '\0')
	{
		longl++;
		s++;
	}
	s--;
	for (a = longl; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
