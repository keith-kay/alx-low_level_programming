#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table.
 * @key: Key to look up in the hash table.
 *
 * Return: The value if found, NULL if not.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (strcmp(node->key, key) && node != NULL)
	{
		node = node->next;
	}
	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
