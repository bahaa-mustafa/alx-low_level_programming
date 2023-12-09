#include "main.h"

/**
 * str_concat - concatunate two string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to full string in succes
 * and NULL in zero char and fails
 */

char *str_concat(char *s1, char *s2)
{
	char *pt = malloc(sizeof(char *) * 2);
	int i, j;

	if (s1 == 0 && s2 == 0)
		return (NULL);

	i = 0;
	while (*s1 != '\0')
	{
		pt[i] = s1[i];
		i++;
	}
	j = 0;
	while (*s2 != '\0')
	{
		pt[i] = s2[j];
		i++;
		j++;
	}
	pt[i] = '\0';
	return (pt);
}
