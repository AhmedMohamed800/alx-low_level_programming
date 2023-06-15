#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head
 * @idx: index of the new node
 * @n: number of the new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *current = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current->next != NULL)
	{
		if (idx == i && current->next != NULL)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			current->prev->next = new;
			new->prev = current->prev;
			new->next = current;
			current->prev = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	if (current->next == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	return (new);
}
