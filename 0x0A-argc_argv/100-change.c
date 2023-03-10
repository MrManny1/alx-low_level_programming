#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: the count of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

	position = total = change = aux = 0;

	if (argc !=  2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]); /*convert str to int*/


	if (total <= 0)
	{
	printf("0\n");
	return (0);
	}

	/*while loop for finding the change*/
	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = total / coins[position];
			change += aux;
			total -= coins[position] * aux;
		}
		position++;
	}

	printf("%d\n", change);
	return (0);
}

