#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another
* @n: the first number
* @m: the second number
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
unsigned int u;

for (u = 0; u < 64; u++)
{
current = exclusive >> u;
if (current & 1)
count++;
}

return (count);
}
