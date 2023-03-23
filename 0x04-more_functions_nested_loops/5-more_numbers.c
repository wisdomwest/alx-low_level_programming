#include "main.h"

/**
 * more_numbers - print numbers 0 - 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 11; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
