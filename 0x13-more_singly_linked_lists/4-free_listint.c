#include "lists.h"
/**
 * free_listint - free node
 * @head: pointer to head
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(head);
		}
	}
}
