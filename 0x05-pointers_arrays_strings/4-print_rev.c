#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: pointer for the string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int i = 0;
	int n = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	
	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
