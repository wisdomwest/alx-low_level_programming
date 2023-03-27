#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * @a: firt int
 * @b: second int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
