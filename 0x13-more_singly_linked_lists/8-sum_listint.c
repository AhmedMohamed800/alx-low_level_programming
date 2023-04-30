#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
* @head: pointer to head
* Return: sum of all data of linked list
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
