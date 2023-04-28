#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: point to head
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		a++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (a);
}
