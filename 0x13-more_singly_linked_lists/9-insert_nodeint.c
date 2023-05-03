#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: beginning of list
 * @idx: index
 * @n: data to be stored
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *address = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	for (i = 0; i < idx && address != NULL; i++)
		address = address->next;

	new->next = address->next;
	address->next = new;

	return (new);
}
