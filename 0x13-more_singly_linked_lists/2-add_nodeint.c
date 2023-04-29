#include "lists.h"

/**
 * add_nodeint - add node at beginning of list
 * @head: head of linked list
 * @n: data to be put
 * Return: address of added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
