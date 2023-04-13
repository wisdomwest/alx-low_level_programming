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

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size ==  old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		if (new_size > old_size)
		{
			memcpy(new_ptr, ptr, old_size);
		}
		else
		{
			memcpy(new_ptr, ptr, new_size);
		}
		free(ptr);
	}

	return (new_ptr);
}
