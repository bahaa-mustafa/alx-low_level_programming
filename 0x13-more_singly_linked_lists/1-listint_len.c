#include "lists.h"

/**
 * listint_len - found number of elements
 * @h: pointer to a head
 *
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
