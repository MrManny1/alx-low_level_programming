#include "main.h"

int is_divisible(int num, int div);
int is_prime_helper(int n, int i);
int is_prime_number(int n);


/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return: if the number ius divisible - 0
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
 * is_prime_helper - helper function to check if a number is prime
 * @n: the number to be checked
 * @i: the current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (n == 0 || n == 1)
		return (0);

	if (i > n / 2)
		return (1);

	if (is_divisible(n, i) == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}


/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (is_prime_helper(n, 2) == 1)
		return (1);
	else
		return (0);
}
