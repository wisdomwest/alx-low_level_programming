#include "lists.h"

/**
 * pop_listint -delete head node
 * @head: head on linked list
 * Return: 0 or data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
