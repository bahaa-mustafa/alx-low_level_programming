#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print key and value of hash table
 * @ht: pointer to hash table
 *
 * Retrun: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i, ref = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (ref == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			ref = 1;
		}
	}
	printf("}\n");
}
