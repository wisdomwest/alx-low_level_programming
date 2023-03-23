#include "main.h"
#include <stdio.h>

/**
 * print_number - print number
 * @n: number to be printed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
