#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y
 * @x: base number
 * @y: number of power
 *
 * Return: value of x with power of y
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (x);
	if (y == 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
