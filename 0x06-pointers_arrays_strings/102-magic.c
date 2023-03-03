#include "main.h"
#include <stdio.h>

/*
   * main - Entry point
   * Description: Add one line of code to print a[2] = 98
   * Return: 0
   */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 7) = 98;

	printf("a[2] = %d\n", *(int *)((char *)p + 0x2c));
	return (0);
}
