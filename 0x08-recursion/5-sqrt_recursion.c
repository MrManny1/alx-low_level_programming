#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of an inputted number
 * @num: the number to find the square root of
 * @root: the root to be tested
 * Return: if the number has a natural square root - the square root
 *         if the number does not have a natural square root - -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	else if ((root * root) > num)
		return (-1);
	return (find_sqrt(num, root + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (find_sqrt(n, 1));
}
