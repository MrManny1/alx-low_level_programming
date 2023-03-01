#include "main"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: the string
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if ((i > 0 && str[i - 1] == ' ') ||
				(i > 0 && str[i - 1] == '\t') ||
				(i > 0 && str[i - 1] == '\n') ||
				(i > 0 && str[i - 1] == ',') ||
				(i > 0 && str[i - 1] == ';') ||
				(i > 0 && str[i - 1] == '.') ||
				(i > 0 && str[i - 1] == '!') ||
				(i > 0 && str[i - 1] == '?') ||
				(i > 0 && str[i - 1] == '"') ||
				(i > 0 && str[i - 1] == '(') ||
				(i > 0 && str[i - 1] == ')') ||
				(i > 0 && str[i - 1] == '{') ||
				(i > 0 && str[i - 1] == '}') ||
				i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
