#include "lists.h"
#include <stddef.h>

/**
 * print_listint - found number of elements
 * @h: pointer to head of linked list
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
