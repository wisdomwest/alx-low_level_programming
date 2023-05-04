#include "main.h"

/**
 * flip_bits - get number of bits to flip
 * @n: number
 * @m: number to chnage n to
 * Return: count
 */

/**
 * count - count bits
 * @x: xor number
 * Return: count
 */

int count(int x)
{
	int count = 0;

	while (x>0)
	{
		count++;
		n &= (n - 1);
	}

	return (count);
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xor;

	xor = (n^m);

	return (xor);
}
