#include "main.h"
#include <stdio.h>

/**
 * main - Fibonacci numbers
 * description : prints the first 50 Fibonacci numbers starting with 1 and 2
 * followed by a new line
 * Return: 0
*/
int main(void)
{
	int c = 0;
	long int f = 0, g = 1, next;

	while (c < 50)
	{
		next = f + g;
		f = g;
		g = next;
		printf("%lu", next);

		if (c < 49)
		{
			printf(", ");
		}
		c++;
	}
	_putchar('\n');
	return (0);
}
