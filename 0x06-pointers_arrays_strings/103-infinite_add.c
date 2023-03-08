#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store result
 * @size_r: Size of buffer
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i = 0, j = 0;
	
	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

        if (len1 + 1 > size_r || len2 + 1 > size_r)
                return (0);

        while (len1 || len2) {
                sum = carry + (len1 ? (n1[--len1] - '0') : 0) +
                        (len2 ? (n2[--len2] - '0') : 0);
                carry = sum / 10;
                r[i++] = (sum % 10) + '0';
        }

        if (carry)
                r[i++] = carry + '0';

        r[i] = '\0';

        for (j = 0; j < i / 2; j++) {
                char tmp = r[j];
                r[j] = r[i - j - 1];
                r[i - j - 1] = tmp;
        }

        return (r);
}

