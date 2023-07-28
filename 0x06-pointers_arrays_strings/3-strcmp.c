#include "main.h"
#include<string.h>

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: 15 in tru case,
 * -15 in false case, and 0 in equal case.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
