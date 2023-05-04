#include "main.h"

/**
 * get_bit - get bit at index using shift
 * @n: number to check
 * @index: index to check at binary rep on n
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit_mask = 1UL << index;

	if ((n & bit_mask) == 0)
		return (0);
	else
		return (1);
}
