#include "main.h"
/**
 * _isupper - check if a char in uppercase or not
 * @c: it is a char that will be check
 *
 * Return: return 1 in uppercase and 0 in other case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
