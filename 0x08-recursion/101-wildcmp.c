#include "main.h"
/**
 * helper - help to detect similarity in two string
 * @s1: fiert string
 * @s2: second string
 * @f: start of string s1
 * @n: start of string s2
 *
 * Return: 1 in similarity case, 0 if not
 */
int helper(char *s1, char *s2, int f, int n)
{
	if (s1[f] == '\0' && s2[n] == '\0')
		return (1);
	if (s1[f] == s2[n])
		return (s1, s2, f + 1, n + 1);
	if (s1[f] == '\0' && s2[n] == '*')
		return (s1, s2, f, n + 1);
	if (s2[f] == '*')
		return (s1, s2, f, n + 1 || s1, s2, f + 1, n);

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
	return (helper(s1, s2, 0, 0));
}
