#include "main.h"

/**
 * print_alphabet_x10 -  prints alphabet 10 time
 *
*/
void print_alphabet_x10(void)
{
	char c = 'a';

	for (int i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
}
