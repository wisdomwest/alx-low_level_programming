#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: head of the linked list
 * @index: index of the node
 * Return: data of nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
		i++;
	}

	return (head);
}
