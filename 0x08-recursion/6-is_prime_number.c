#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return: if the number is divisible - 0
 *         if the number is not divisible - 1
 *
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	return (0);

	else
		return (1);
}



/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (0);

	for (i = 2; i <= n / 2; i++)
	{
		if (is_divisible(n, i) == 0)
			return (0);
	}

	return (1);
}
