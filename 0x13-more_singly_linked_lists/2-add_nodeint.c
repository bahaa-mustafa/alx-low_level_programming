#include "lists.h"

/**
 * add_nodeint - add node at beginning
 * @head: pointer to head
 * @n: data
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (!new_node->n)
	{
		free(new_node);
		return (NULL);
	}
	if (*head)
		new_node->next = *head;
	*head = new_node;

	return (new_node);
}
