#include "lists.h"

/**
 * add_nodeint_end - add new node at end
 * @head: pointer to head
 * @n: data of node
 *
 * Return: pointer to new node at end
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;

	if (!new_node->n)
		return (NULL);
	if (!*head)
		*head = new_node;

	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	new_node->next = NULL;
	return (new_node);
}
