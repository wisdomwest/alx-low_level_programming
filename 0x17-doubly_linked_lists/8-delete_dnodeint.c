#include "lists.h"

/**
  * delete_dnodeint_at_index - delete
  * @head: head
  * @index: index
  * Return: int
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
