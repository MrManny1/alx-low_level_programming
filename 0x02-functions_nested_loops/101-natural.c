#include "main.h"
#include <stdio.h>

/**
 * main - Sum of multiples
 * Description : prints the sum of all the multiples of 3 or 5 below 1024
 * (excluded), followed by a new line.
 * Return: 0
*/
int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	print("%i\n", sum);
	return (0);
}
