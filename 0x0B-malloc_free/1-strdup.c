#include "main.h"
#include <string.h>
#include <limits.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: poiner to array of string
 *
 * Return: allocated space in momery if succes
 * and NULL if not
 */

char *_strdup(char *str)
{
	char *ar;
	int i;
	
	ar = malloc(INT_MAX);
	i = 0;
	while (*str != '\0')
	{
		ar[i] = *str;
		str++;
		i++;
	}
	if (ar == NULL)
		return (NULL);
	return (ar);
}
