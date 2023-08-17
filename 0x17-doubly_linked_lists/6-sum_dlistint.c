#include "lists.h"

/**
  * sum_dlistint - sum
  * @head: head
  * Return: sum
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
