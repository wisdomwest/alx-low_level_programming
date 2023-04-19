#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate thru array
 * @array: arrayu
 * @size: size of array
 * @action: function pointer
 * Return: 0 or i or -1
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
