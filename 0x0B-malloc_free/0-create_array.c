#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function create array
 * @size: number of item
 * @c: the chars
 *
 * Return: NULL it size is 0 or pointer of char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return (NULL);
	ar = (malloc(sizeof(char) * (size + 1)));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
