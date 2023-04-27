#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to head
*	 Return: nothing
*/
void free_list(list_t *head)
{
	list_t *p = head, *next;

	while (p->next != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
	*head = NULL;
}
