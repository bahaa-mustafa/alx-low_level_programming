#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - free linked list
 * @head: pointer to head of linked list
 *
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (head)
	{
		node = head;
		while (node)
		{
			next_node = node->next;
			free(node->str);
			free(node);
			node = next_node;
		}
	}
	return;
}
