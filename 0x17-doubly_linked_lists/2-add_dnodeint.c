#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head
 * @n: number to be added
 * Return: the created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = current;
		new->prev = NULL;
		if (current != NULL)
			current->prev = new;
		*head = new;
	}
	return (new);
}
