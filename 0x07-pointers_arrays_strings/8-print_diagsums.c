#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print summ of main diagnol of 2d matrix
 * @a: 2d array
 * @size: size of array
 * Return: sum of array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%i, %i\n", sum1, sum2);
}
