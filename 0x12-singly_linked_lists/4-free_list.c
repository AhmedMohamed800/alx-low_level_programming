#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to head
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *p;
	
	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
