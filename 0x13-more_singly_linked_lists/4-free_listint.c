#include "lists.h"
/**
 * free_listint - free node
 * @head: pointer to head
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;

		current = head->next;
		free(current);
	}
}
