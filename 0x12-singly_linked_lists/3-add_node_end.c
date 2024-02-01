#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - add new node at end of linked list
 * @head: poiner to head of linked list
 * @str: data of linked list
 *
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;

	if (!new_node || !head)
	{
		free(new_node);
		return (NULL);
	}
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(new_node->str);
	}
	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
