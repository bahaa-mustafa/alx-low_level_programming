#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - function that create a hach table
 * @size: size of array in hash table
 *
 * Return: pointer to created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(hash_table_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
