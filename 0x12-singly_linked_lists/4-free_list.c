#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to head
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *p;
	
	if (!head) return;
	while (head)
	{
		p = head->next;
		if (head->str)
		{
			free(head->str);
			head->str = NULL;
		}
		free(head);
		head = p;
	}
}
