#include "main.h"
#include<unistd.h>

/**
 * _putchar - return a char
 * @c: the char that will return
 *
 * Return: @c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
