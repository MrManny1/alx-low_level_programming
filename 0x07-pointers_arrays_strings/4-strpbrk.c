#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int c, n;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[c] == accept[n])
			return (s + c);
		}
	}
	return (NULL);
}
