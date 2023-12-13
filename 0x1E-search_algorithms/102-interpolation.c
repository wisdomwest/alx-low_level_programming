#include "search_algos.h"

/**
  * interpolation_search - interpolation search algo
  * @array: array
  * @size: size of array
  * @value: value to search
  * Return: first index of value
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t hi = size - 1;
	size_t lo = 0;

	if (array == NULL)
		return (-1);

	while (hi >= lo)
	{
		pos = lo + (((double)(hi - lo) /
					(array[hi] - array[lo])) * (value - array[lo]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			hi = pos - 1;
		else
			lo = pos + 1;
	}

	return (-1);
}
