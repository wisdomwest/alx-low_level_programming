#include "search_algos.h"

/**
  * _binary_search - binary search
  * @array: array
  * @start: start of block
  * @end: end of block
  * @value: value to search
  * Return: index of value
  */
int _binary_search(int *array, size_t start, size_t end, int value)
{
	size_t i;
	size_t L = start;
	size_t R = end;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = L + (R - L) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			R = i - 1;
		else
			L = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - exponential search algo
  * @array: array
  * @size: size of array
  * @value: value to look for
  * Return: first index of value
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t idx;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		i = 1;
		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i = i * 2;
		}
	}

	idx = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, idx);
	return (_binary_search(array, i / 2, idx, value));
}
