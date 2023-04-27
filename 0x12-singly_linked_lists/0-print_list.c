#include "lists.h"
#include <stdio.h>

/**
 * print_list - print items in a linked list
 * @h: pointer to the node
 * Return: count of items in linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
		count++;
		h = h->next;
	}

	return (count);
}
