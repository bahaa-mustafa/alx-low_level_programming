#include "main.h"

/**
 * _strlen_recursion - return string size
 * @s: the string
 *
 * Return: strlen of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome - check palindrome of string
 * @s: the string
 * @start: start of string
 * @end: end of string
 *
 * Return: 1 in case of start = end
 * 0 if not
 */
int _is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_is_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome -  returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: the string
 *
 * Return:  returns 1 in palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_is_palindrome(s, 0, len - 1));
}
