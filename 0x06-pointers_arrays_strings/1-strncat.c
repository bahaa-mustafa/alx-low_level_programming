#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: dest string after concatenate it
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest != '\0'; i++)
		;
	for (j = 0; src != '\0'; j++)
	{
		if (j < n)
			dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
