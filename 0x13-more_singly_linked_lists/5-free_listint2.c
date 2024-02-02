#include "lists.h"

/**
 * free_listint2 - free node and set head to NULL
 * @head: pointer to head node
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (!head)
		return;

	current = *head;

	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
