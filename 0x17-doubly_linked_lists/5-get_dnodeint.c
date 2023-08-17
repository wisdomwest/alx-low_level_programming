#include "lists.h"

/**
  * get_dnodeint_at_index - get node at index
  * @head: head
  * @index: index
  * Return: node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
