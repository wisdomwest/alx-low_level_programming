#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of x size
 * @size: size of array
 * @c: character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size);

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
