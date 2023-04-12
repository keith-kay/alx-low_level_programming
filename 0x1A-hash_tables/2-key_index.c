#include "hash_tables.h"

/**
 * key_index - Returns the index of the  key.
 * @key: The key to be indexed.
 * @size: The size of the hash table.
 *
 * Return: The index of the key in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
