#include "main.h"
#include<sring.h>

/**
 * rev_string - reverses a string.
 * @s: the string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i = 0;

	while (*s != '\0')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
