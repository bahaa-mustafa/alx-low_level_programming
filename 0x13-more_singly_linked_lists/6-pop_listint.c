#include "lists.h"

/**
 * pop_listint - delet first node and retuen his data
 * @head: pointer to head
 *
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	int data_n;
	listint_t *current;

	if (!head)
		return (0);
	current = (*head)->next;
	if (!*head)
		return (0);
	data_n = (*head)->n;
	free(*head);
	*head = current;
	return (data_n);
}

