#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash_Table to be prointed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, printed = 0;
	hash_node_t *my_node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			my_node = ht->array[i];
			if (printed > 0)
				printf(", ");
			printf("'%s': '%s'", my_node->key, my_node->value);
			printed++;
			while (my_node->next != NULL)
			{
				if (printed > 0)
					printf(", ");
				my_node = my_node->next;
				printf("'%s': '%s'", my_node->key, my_node->value);
				printed++;
			}
		}
	}
	printf("}\n");

}
