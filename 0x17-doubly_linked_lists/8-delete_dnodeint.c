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
	if (index < 0 || index > 50)
		return (-1);
	if (index == 0)
	{
		if (current->next == NULL)
		{
			free(current);
			*head = NULL;
			return (1);
		}
		current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	for (; index != 1; index--)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);
	return (1);
}
