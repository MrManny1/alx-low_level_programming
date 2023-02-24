#include <stdio.h>
#include <math.h>

/**
 * main - a program that finds and prints the largest prime factor
 * Return: Always 0
*/

int main(void)
{
	long a, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 2; a <= square; a++)
	{
		while (number % a == 0)
		{
			maxf = a;
			number = number / a;
		}
	}
	if (number > 2)
	{
		maxf = number;
	}
	printf("%ld\n", maxf);
	return (0);

}
