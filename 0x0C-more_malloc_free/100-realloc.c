#include <stdlib.h>
#include "main.h"

/**
 * _realloc - similar to realloc
 * @ptr: old pointer
 * @old_size: old size of memory
 * @new_size: new mwemory size
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *op = ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size ==  old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = op[i];

	free(ptr);
	return (p);
}
