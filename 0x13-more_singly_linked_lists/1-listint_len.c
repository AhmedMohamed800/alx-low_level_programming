#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: point to head
* Return: number of elments
*/
size_t listint_len(const listint_t *h)
{
	size_t a = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		a++;
		ptr = ptr->next;
	}
	return (a);
}
