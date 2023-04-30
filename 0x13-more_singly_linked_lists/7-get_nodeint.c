#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: pointer to head
* @index: the required index
* Return: the node corresponding to index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		if (i == index)
		{
			return (ptr);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
