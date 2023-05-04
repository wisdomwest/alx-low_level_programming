#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: binary to find
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	/**
	 * get highest number decimal in bits
	 * 1 is to get MSB
	 */

	while (bit_mask > 0)
	{
		if ((n & bit_mask) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		bit_mask >>= 1;
	}
}
