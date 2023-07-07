#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: table
 * @key: key to find its value
 * Return: the value of a certain key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long index;

	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
