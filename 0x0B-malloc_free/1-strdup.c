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

	i = 0;
	while (str[i] != '\0')
		i++;

	if (str == NULL)
		return (NULL);
	ar = malloc(i * sizeof(*str) + 1);
	while (*str != '\0')
	{
		ar[i] = *str;
		str++;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
