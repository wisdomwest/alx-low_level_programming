#include "main.h"

/**
 * print_triangle - check for a digit
 * @size: size of expected triangle
 * Return: none
 */

void print_triangle(int size)
{
	int i, k, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
