#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n--; c++)

	{
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}
}
