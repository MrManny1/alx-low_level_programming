#include <stdio.h>
/**
 * main - print out sizes of data types in C
 *
 * Return: 0
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int g;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(g));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
