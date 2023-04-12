#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a valuefrom the hashtable.
 * @ht: Pointer to the hash table.
 * @key: The key to look up in the hash table.
 *
 * Return: The value associated with the key if true, or NULL if key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	return (node == NULL ? NULL : node->value);
}
