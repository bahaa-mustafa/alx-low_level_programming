#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first string
 * @src: second string
 * @n: number of copies
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
