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
	int i, l;

	i = 0;
	while (str[i] != '\0')
		i++;

	if (str == NULL)
		return (NULL);
	ar = malloc(i * sizeof(*str) + 1);
	if (ar == 0)
		return (NULL);
	l = 0;
	while (i >= l)
	{
		ar[l] = str[l];
		l++;
	}
	ar[i] = '\0';
	return (ar);
}
