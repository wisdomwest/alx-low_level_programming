#include "main.h"

/**
  * print_binary - convert base 2 to base 10
  * @n: decimal to convert
  * Return: binary
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	if ((n & 1) == 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
