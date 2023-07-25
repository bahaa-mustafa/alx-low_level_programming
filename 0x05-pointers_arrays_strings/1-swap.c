#include "main.h"

/**
 * swap_int - swap a value of two integers
 * @a: first int
 * @b: second int
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
