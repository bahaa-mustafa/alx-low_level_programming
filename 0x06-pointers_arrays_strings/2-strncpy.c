#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: first string
 * @src: second string
 * @n: number of copied characters
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (n != 0 && src[i] != '\0')
		{
			dest[i] = src[i];
			n--;
		}
	}
	dest[i] = '\0';
	return (dest);
}
