#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: pointer to char array
 * @c: char that will locates
 *
 * Return: a pointer to the first occurrence of
 * the character c in the string s, or NULL if
 * the character is not found
 */

char *_strchr(char *s, char c)
{
	char i;

	for (i = *s; i < '\0'; s++)
	{
		if (*s == c)
			return (s - 1);
	}
	return (NULL);
}
