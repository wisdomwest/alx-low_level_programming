#include "lists.h"
/**
 * add_nodeint_end - adds node at end of list
 * @head: head of list
 * @n: data to be added to list
 * Return: address of last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	new->n  = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (new);
}
