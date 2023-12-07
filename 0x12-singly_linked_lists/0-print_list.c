#include "lists.h"

/**
 * _strlen - culculate length of string if found
 * @s: pointer to string length
 *
 * Return: number of chars or 0
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * pront_list - function that print list of string
 * @h: the list will print
 *
 * Return: number of chars and the word
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)" );
		h = h->next;
		i++;
	}
	return (i);
}
