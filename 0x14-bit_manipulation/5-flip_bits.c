#include "main.h"

/**
 * count - count bits
 * @x: xor number
 * Return: count
 */

int count(int x)
{
	int count = 0;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}

	return (count);
}

/**
 * flip_bits - get number of bits to flip
 * @n: number
 * @m: number to chnage n to
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xor;

	xor = (n ^ m);

	return (xor);
}
