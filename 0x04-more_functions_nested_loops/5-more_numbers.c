#include "main.h"

/**
 * more_numbers - print numbers 0 - 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');

			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
