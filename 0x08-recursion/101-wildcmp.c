#include "main.h"

/**
 * helper - help to detect similarity in two string
 * @s1: fiert string
 * @s2: second string
 *
 * Return: 1 in similarity case, 0 if not
 */
int helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0')
		return (0);
	if (*s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		return (helper(s1, s2+1));
	}
	if (*s1 == *s2)
	{
		return (helper(s1+1, s2+1));
	}
	if (*s2 != *s1)
	{
		return (helper(s1+1, s2));
	}
	return (0);

}

/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * otherwise return 0.
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 in identical case, 0 in otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	return (helper(s1, s2));
}
