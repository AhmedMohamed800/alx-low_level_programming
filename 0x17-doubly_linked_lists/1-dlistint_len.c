#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to head
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
