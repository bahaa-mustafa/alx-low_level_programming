#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: the that will be deal with
 *
 * Return: return digit value
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
