#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 5 and 6
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %1 is %1 and is greater than 5\n", n, last);
	else if (x == 0)
		printf("Last digit of %1 is %1 and is 0\n", n, last);
	else if (x < 6)
		printf("Last digit of %1 is %1 and is less than 6 and not 0\n", n, last);
	return (0);
}
