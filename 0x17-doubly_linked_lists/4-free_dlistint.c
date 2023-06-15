#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp;

	if (current)
	{
		while (current->next != NULL)
		{
			temp = current;
			current = current->next;
			current->prev = NULL;
			free(temp);
		}
		free(current);
	}
}
