#include "main.h"
/**
 * print_most_numbers - print numbers from 0 : 9 expet 2, 4
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}
	_putchar('\n');
}
