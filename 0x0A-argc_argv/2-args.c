#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives
 * @argc: the count arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
