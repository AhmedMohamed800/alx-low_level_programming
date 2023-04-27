#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to head
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *p, *next;
	
	if (head == NULL)
		return;
	next = head;
	while (next != NULL)
	{
		p = next;
		next = next->next;
		free(p);
		free(p->str);
	}
	head = NULL;
}
