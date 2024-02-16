#include"hash_tables.h"
#include <stdio.h>

/**
 * make_hash_node - create new node
 * @key: key of array
 * @value: value of new node
 *
 * Return: pointer to new node
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node);
		free(node->key);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - set new hash table
 * @ht: pointer to hash table
 * @key: string to hash or index
 * @value: value of hash table
 *
 * Return: 1 in success and 0 in other
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	char *new_value;
	unsigned long int index;

	if (value == NULL || key == NULL || strlen(key) == 0 ||
			ht == NULL || ht->size == 0 || ht->array == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new_node = make_hash_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
