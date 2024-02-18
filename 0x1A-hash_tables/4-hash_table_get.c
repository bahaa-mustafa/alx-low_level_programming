#include "hash_tables.h"

/**
 * hash_table_get - return value of index
 * @ht: hash table
 * @key: key of hash table
 *
 * Return: current value of key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht || !key)
		return (NULL);

	unsigned long int index;
	hash_node_t current;

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	return (current->value);
}
