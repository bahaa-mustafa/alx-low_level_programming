#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - add a new node in a head
 * @head: a new head for a linked list
 * @str: a data for a head
 *
 * new_node - adding new node
 * list_s - a struct for node
 * Description add a new node at a head position
 * Return: pointer for new node or NULL in fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!head || !newNode)
	{
		free(newNode);
		return (NULL);
	}
	if (str)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = strlen(newNode->str);
	}
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
