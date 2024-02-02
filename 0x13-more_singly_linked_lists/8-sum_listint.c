#include "lists.h"

/**
 * sum_listint - sum data of all nodes
 * @head: pointer to head
 *
 * Return: sum of all numbers
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (!head)
		return (0);
	node = head;
	while (node->next)
	{
		sum = sum + node->n;
		node = node->next;
	}
	sum = sum + node->n;
	return (sum);
}
