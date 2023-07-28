#include "main.h"

/**
 * reverse_array - reverses the content of
 * an array of integers.
 * @a: array of integer
 * @n: is the number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n / 2 - 1;
	while (i >= 0)
	{
		if (i != n / 2 - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i] + '0');
		i--;
	}
	_putchar('\n');
}

