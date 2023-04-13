#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array and fill with values
 * @min: min int
 * @max: max int
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}
