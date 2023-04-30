#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: pointer to start of node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
