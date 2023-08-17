#include "lists.h"

/**
  * free_dlistint - free dlist
  * @head: head
  * Return: void
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
