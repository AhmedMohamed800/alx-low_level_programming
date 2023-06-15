#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head
 * @index: index to search with it
 * Return: node that corresponds with index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;
	
	if (current != NULL)
	{
		while (current->next != NULL)
		{
			if (i == index)
				break;
			current = current->next;
			i++;
		}
		if (i != index)
			return (NULL);
	}
	return (current);
}
