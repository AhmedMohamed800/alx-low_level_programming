#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to head
* @idx: is the index of the list where the new node should be added.
* @n: int data for new node
* Return: the inserted node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
