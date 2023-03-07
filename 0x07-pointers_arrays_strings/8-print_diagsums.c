#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals...
 * @a: input
 * @size: input
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int c, n, sum1 = 0, sum2 = 0;

	for (c = 0; c <= (size * size); c = c + size + 1)
		sum1 = sum1 + a[c];

	for (n = size - 1; n < size * size - 1; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
