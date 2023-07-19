#include "main.h"
/**
 * print_sign - print + and return 1 if number is greater than 0,
 * print - and return -1 if number is lower than 0,
 * and print 0 then return 0 if number is 0
 * @n: the number that will be check
 *
 * Return: 1 in positive number, -1 in negitive number, and 0 in zero number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
