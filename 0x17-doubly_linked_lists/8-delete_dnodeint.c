#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of linked list.
 * @head: pointer to head
 * @index: index to be delted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current != NULL)
	{
		if (current->prev != NULL)
		{
			current->prev->next = current->next;
		}
		else
		{
			*head = current->next;
		}
		if (current->next != NULL)
			current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}
