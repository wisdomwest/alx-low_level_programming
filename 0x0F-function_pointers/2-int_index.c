#include "function_pointers.h"

/**
 * int_index - find int index in array
 * @array: array
 * @size: size
 * @cmp: cmp function
 * Return: -1 or 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
