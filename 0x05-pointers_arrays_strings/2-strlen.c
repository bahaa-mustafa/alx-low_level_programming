#include "main.h"
#include<string.h>

/**
 * _strlen - return the length of a string
 * @s: the string
 *
 * Return: number of string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
