#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to head
* Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;
	n = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (n);
}
