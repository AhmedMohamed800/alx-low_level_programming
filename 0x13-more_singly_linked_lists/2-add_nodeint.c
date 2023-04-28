#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: pointer to head
* @n: number to add
* Return: new elemento or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
	}
	return (new_node);
}
