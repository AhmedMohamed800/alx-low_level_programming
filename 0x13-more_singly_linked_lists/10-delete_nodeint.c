#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index index of a linked list.
* @head: pointer to head
* @index: the index of the node that should be deleted.
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *before_last;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		if (i == (index - 1))
		{
			before_last = current;
		}
		current = current->next;
	}
	before_last->next = current->next;
	free(current);
	return (1);
}
