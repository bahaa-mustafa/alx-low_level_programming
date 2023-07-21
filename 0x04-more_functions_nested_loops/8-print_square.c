#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: the size
 */
void print_square(int size)
{
	int n, i;

	if (size <= 0)
		_putchar('\n');

	for (n = 0; n < size; n++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
