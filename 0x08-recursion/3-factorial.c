#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: if n > 0 - the factorial of n
 *         if n < 0 - -1 to indicate an error
 *
 */

int factorial(int n)
{
	int result = 1;
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}

		while (i <= n)
		{
			result *= i;
			i++;
		}

		return (result);
}
