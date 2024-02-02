#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at index
 * @head: point to head
 * @idx: the position of new node
 * @n: data of new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;

	unsigned int i = 0;

	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!new_node->n)
		return (NULL);
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current)
	{
		if (i == (idx - 1))
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		i++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
