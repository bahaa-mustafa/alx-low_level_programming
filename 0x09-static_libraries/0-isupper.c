#include "main.h"
#include<stdio.h>

/**
 * _isupper - check if char is upper case
 * @c: the char that will check
 *
 * Return: 1 if it upper and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
