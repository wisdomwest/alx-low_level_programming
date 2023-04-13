#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - functions simlar to calloc
 * @nmemb: array of elements
 * @size: size of array
 * Return: null or pointer to first element
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;

	p = malloc(total);

	if (p == NULL)
	{
		return (NULL);
	}

	memset(p, 0, total);

	return (p);
}
