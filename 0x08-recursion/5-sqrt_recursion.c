#include "main.h"

/**
 * helper - help me to detect number of root
 * @n: the number that will check in
 * @i: number of root
 *
 * Return: number of root i
 */
int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion -  returns the natural
 * square root of a number.
 * @n: the number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	return (helper(n, 0));
}
