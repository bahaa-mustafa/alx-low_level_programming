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
	int i, temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}

