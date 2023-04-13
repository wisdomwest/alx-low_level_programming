#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - simple cheker for malloc
 * @b: size needed
 * Return: pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
