#include "lists.h"

/**
* list_len - returns the number of elements
* @h: pointer to head
* Return: number of elements in a linked list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
