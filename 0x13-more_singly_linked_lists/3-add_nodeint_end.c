#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: pointer to head
* @n: number to print
* Return: element or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		if (*head == NULL)
		{
			*head = new_node;
			new_node->n = n;
			return (new_node);
		}
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
		new_node->n = n;
		new_node->next = NULL;
	}
	return (new_node);
}
