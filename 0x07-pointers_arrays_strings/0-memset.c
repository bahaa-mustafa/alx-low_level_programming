#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to base string
 * @b: the string which will use
 * @n: number of fills
 *
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    {
      s[i] = b;
    }
  return (s);
}
