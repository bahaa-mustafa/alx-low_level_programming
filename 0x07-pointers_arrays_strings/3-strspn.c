#include "main.h"

/**
 * _strspn - gets the length of
 * a prefix substring.
 * @s: pointer to char array
 * @accept: the char that will check
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, pin;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		pin = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				pin = 1;
			}
		}
		if (pin == 0)
			return (f);
	}
	return (0);
}
