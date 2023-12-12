#include "search_algos.h"

/**
  * min - find min int
  * @a: first integer
  * @b: second integer
  * Return: min int
  */
int min(int a, int b)
{
	return (a < b) ? a : b;
}
/**
  * jump_search - jump search algo
  * @array: pointer to first element in array
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index value is located
  */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;

	while (array[min(step, size) - 1] < size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, arr[prev]);

	}
}
