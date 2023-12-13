#include "search_algos.h"

/**
  * jump_search - jump search algo
  * @array: pointer to first element in array
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index value is located
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, idx, step;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	idx = 0;

	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		i = idx;
		idx += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, idx);

	if (idx < size - 1)
		idx = idx;
	else
		idx = size - 1;

	while (i < idx && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
