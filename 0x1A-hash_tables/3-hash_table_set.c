#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: can not be an empty string
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node, *new_node;

	if (strlen(key) == 0)
	{
		fprintf(stderr, "key can not be an empty string\n");
		return (0);
	}
	index = key_index((unsigned char *) key, ht->size);
	current_node = ht->array[index];
	new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);
	if (current_node == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		while (current_node != NULL)
		{
			if (strcmp(key, current_node->key) == 0)
			{
				strcpy(current_node->key, key);
				strcpy(current_node->value, value);
				free(new_node);
				return (1);
			}
			current_node = current_node->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

/**
 * create_node -  create a new node
 * @key: can not be an empty string
 * @value: is the value associated with the key.
 * Return: new node if it succeeded or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t *));

	if (new_node == NULL)
		return (NULL);
	new_node->key = (char *) malloc(strlen(key) + 1);
	if (new_node->key == NULL)
		return (NULL);
	new_node->value = (char *) malloc(strlen(value) + 1);
	if (new_node->value == NULL)
		return (NULL);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	return (new_node);
}
