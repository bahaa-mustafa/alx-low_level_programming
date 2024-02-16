#include "hash_tables.h"

/**
 * key_index - give index or hash of key
 * @key: string that will give a hash index
 * @size: size of array
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
