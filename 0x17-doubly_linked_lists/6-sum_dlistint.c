#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a linked list.
 * @head: points to head
 * Return: the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int totale = 0;
	dlistint_t *current = head;

	if (current != NULL)
	{
		totale += current->n;
		while (current->next != NULL)
		{
			current = current->next;
			totale += current->n;
		}
	}
	return (totale);
}
