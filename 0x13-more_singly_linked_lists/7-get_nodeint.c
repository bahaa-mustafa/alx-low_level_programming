#include "lists.h"

/**
 * get_nodeint_at_index - found data at index
 * @head: pointer to head
 * @index: number of data that wanted
 *
 * Return: data of node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (!head)
		return (NULL);
	current = head;
	for (i = 0; i < index; i++)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	return (current);
}

