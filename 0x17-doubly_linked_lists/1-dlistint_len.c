#include "lists.h"

/**
  * dlistint_len - number of elements
  * @h: pointer
  * Return: count
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
