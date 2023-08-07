#include "main.h"

/**
 * helper - detect prime number
 * @n: the number will check in
 * @i: number of times
 *
 * Return: 1 in prime case and 0 if not
 */

int helper(int n, int i)
{
	if (i * i == n)
		return (0);
	if (i * i > n)
		return (1);
	return (helper(n, i + 1));
}

/**
 * is_prime_number -  returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: the number
 *
 * Return: 1 in prime number, and 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	return (helper(n, 0));
}
