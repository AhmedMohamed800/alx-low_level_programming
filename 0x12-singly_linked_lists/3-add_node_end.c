#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: pointer to head
* @str: string to be duplicated
* Return: the new node or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *p = *head;

	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (p->next != NULL)
			{
				p = p->next;
			}
			p->next = new_node;
		}
	}
	return (new_node);
}
