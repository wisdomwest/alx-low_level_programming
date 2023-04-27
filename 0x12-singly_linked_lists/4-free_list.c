#include "lists.h"

/**
 * free_list - free linked list by transversing
 * @head: pointer to first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
