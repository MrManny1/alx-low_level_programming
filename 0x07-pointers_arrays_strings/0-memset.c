#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointed destination
 * @b: constant byte
 * @n: number of bytes
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
