#include "main.h"
/**
 * _islower - check if character is lowercase (1) or not (0)
 * @c: the character that will be check
 *
 * Return: 1 for lowercase, 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
