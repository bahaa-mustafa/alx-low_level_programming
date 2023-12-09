#include "main.h"


/**
 * _strlen - calculate the length of string
 * @c: the string
 *
 * Return: number of the length
 */
int _strlen(char *c)
{
	int len;

	for (len = 0; c[len] != '\0'; len++)
		;
	return (len);
}

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
	int size1, size2, i;
	char *pt;

	if (s1 == 0)
		s1 = '\0';
	if (s2 == 0)
		s2 = '\0';
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	pt = malloc((size1 + size2) * sizeof(char) + 1);
	if (pt == 0)
		return (NULL);
	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			pt[i] = s1[i];
		pt[i] = s1[i - size1];
	}
	pt[i] = '\0';
	return (pt);
}
