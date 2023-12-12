#include "search_algos.h"

/**
  * binary_search - binary search algorithm
  * @array: pointer to first element in array
  * @size: number of elements in array
  * @value: value to search for
  * Return: index where value is located
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t L = 0;
	size_t R = size - 1;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n, ", array[i]);

		i = L + (R - L) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			R = i - 1;
		}
		else
		{
			L = i + 1;
		}
	}
	return (-1);
}
