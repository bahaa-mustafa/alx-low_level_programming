#include "main.h"
/**
 * _isalpha - check if the input is character or not
 * @c: the char that will be check
 *
 * Return: 1 if it is character, 0 if it is not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
