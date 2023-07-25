#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * to stdout
 * @str: the string that will print
 *
 * Return: no return
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');
}
