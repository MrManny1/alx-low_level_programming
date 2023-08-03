#include <unistd.h>

/**
* _putchar – A function that writes a character to stdout
* @c: The character to print
* Return: 1 on success, on error, -1, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
