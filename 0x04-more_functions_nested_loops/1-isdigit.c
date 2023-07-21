#include "main.h"
/**
 * _isdigit - check the input is digit or not
 * @c: the input that will be check
 *
 * Return: 1 in digit case, and 0 in other
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
