#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: the string
 *
 */

void _print_rev_recursion(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	if (*s != '\0' && j == 0)
	{
		s++;
		i++;
		_print_rev_recursion(s);
	}

	else
	{
		if (i < 0)
			return;
		j = 1;
		s--;
		i--;
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
