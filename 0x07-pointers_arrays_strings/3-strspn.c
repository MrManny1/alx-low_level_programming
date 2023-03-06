#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, n, value;

	value = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[a])
			{
				value++;
				break;
			}
		}

		if (accept[n] == '\0')
		{
		return (value);
		}
	}

	return (value);
}
