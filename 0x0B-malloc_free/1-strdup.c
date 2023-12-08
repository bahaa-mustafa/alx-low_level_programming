#include "main.h"
#include <string.h>

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
	while (*str != '\0')
	{
		i++;
		str++;
	}
	ar = malloc(sizeof(char) * i);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i <= sizeof(str))
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
