#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to head
* @idx: is the index of the list where the new node should be added.
* @n: int data for new node
* Return: the inserted node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *last;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || *head == NULL || (*head)->next == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (current->next == NULL)
		{
			new_node->next = NULL;
			current->next = new_node;
			break;
		}
		if (idx == i)
		{
			last->next = new_node;
			new_node->next = current;
			break;
		}
		last = current;
		current = current->next;
		i++;
	}
	return (new_node);
}
