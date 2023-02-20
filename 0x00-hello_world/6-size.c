#include <stdio.h>

/**
 * main - A C program the size of various types on the computer
 *
 * Return: 0 (success)
*/
int main(void)
{
	if __WORDSIZE == 64
		printf("This is a 64-bit machine.\n");
	else
		printf("This is a 32-bit machine.\n";
	endif

	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of short: %ld byte(s)\n", sizeof(short));
	printf("Size of long: %ld byte(s)\n", sizeof(long));
	printf("Size of int: %ld byte(s)\n', size of(int));
	return 0:}
}
