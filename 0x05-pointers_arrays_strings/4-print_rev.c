#include "main.h"
#include<string.h>

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: pointer for the string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int n = 0;
	int i = strlen(s);

	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
