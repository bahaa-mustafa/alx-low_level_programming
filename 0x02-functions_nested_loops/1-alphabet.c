#include "main.h"
/**
 * print_alphabet - print alphabet characters followed by a new line
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar("%c", c);
	_putchar('\n');
}
