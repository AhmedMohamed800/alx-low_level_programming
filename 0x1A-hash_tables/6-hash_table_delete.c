#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: table to be deleted
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				temp = node;
				node = node->next;
				free(temp);
			}
		}
	}
}
