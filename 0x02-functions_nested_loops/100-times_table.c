#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *		       starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return ();
	}
	for (int i = 0; i <= n; i++)
	{
		_putchar('0');

	for (int j = 0; j <= n; j++)
	{
		int prod = i * j;
			if (prod < 10)
			{
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod < 100)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
				_putchar((prod % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
	}

	_putchar('\n');
	}
}
