#include "lists.h"

/**
 * sum_listint - get sum of data in list
 * @head: pointer to head of list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
