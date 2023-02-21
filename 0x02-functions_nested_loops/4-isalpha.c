#include "main.h"

/**
 * _isalpha - check for lowercase letter
 * @c : Character to check
 * Return:0
*/
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
