#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head
 * @n: number to be added
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		if (current != NULL)
		{
			while (current->next != NULL)
				current = current->next;
			current->next = new;
		}
		else
		{
			*head = new;
		}
		new->n = n;
		new->prev = current;
		new->next = NULL;
	}
	return (new);
}
