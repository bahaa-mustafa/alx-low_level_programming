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
	int lengthS1 = strlen(s1);
	int lengthS2 = strlen(s2);

	if (lengthS1 > lengthS2)
		return (15);
	else if (lengthS1 < lengthS2)
		return (-15);
	else
		return (0);
}
