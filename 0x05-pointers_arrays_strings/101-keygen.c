#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 6

/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
		const int charset_size = sizeof(charset) - 1;
		int i;

		srand(time(NULL));

		for (;;)
		{
			for (i = 0; i < PASSWORD_LENGTH; i++)
			{
				password[i] = charset[rand() % charset_size];
			}
			password[PASSWORD_LENGTH] = '\0';

			printf("Trying password: %s\n", password);

			if (system("./101-crackme password") == 0)
			{
				printf("Password cracked: %s\n", password);
				break;
			}
		}
		return (0);
}

