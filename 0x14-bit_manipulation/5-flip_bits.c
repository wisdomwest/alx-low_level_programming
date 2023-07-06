#include "main.h"

/**
  * count - count
  * @x: number
  * Return: count
  */

unsigned int count(unsigned long int x)
{
	unsigned int count;

	while (x > 0)
	{
		count += (x & 1);
		x >>= 1;
	}

	return (count);
}

/**
  * flip_bits - get number to flip
  * @n: number
  * @m: number to change to
  * Return: count
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;

	return (count(xor));
}
