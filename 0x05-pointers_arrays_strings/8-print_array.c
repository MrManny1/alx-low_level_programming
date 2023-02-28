#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * followed by a new line
 * @a: Array of integers
 * @n: number of elements to be printed
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
