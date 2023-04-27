#include "lists.h"

/**
* print_list - prints all the elements of a list_t list.
* @h: pointer to head
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[%u] (nil)\n", p->len);
		}
		else
		{
			printf("[%u] %s\n", p->len, p->str);
		}
		p = p->next;
		count += 1;
	}
	return (count);
}
