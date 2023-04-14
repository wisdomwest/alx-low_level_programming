#include <string.h>
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
	void *new_ptr;
	char *cp, *f;
	unsigned int i;

	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	if (new_size ==  old_size)
	{
		return (ptr);
	}
	cp = ptr;
	new_ptr = malloc(sizeof(*cp) * new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	f = new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		f[i] = *cp++;

	free(ptr);
	return (new_ptr);
}
