#include "lists.h"

/**
 * delete_nodeint_at_index - delet node at index
 * @head: pointer t head
 * @index: a point of node that will remove
 *
 * Return: 1 in success and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	current = *head;
	while (current)
	{
		if (i == index)
		{
			temp->next = current->next;
			free(current);
			return (1);
		}
		temp = current;
		i++;
		current = current->next;
	}
	return (-1);
}
