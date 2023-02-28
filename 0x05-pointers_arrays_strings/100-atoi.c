#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer
 * @s: The pointer to convert
 * Return: ni
 */

int _atoi(char *s)
{
	int g = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[g])
	{
		if (s[g] == 45)
		{
			min *= -1;
		}
		while (s[g] >= 48 && s[g] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[g] - '0');
			g++;
		}
		if (isi == 1)
		{
			break;
		}
		g++;
	}
	ni *= min;
	return (ni);
}
