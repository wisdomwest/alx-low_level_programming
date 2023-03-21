#include "main.h"

/**
 * print_alphabet_x10 - print 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i < 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		i++;
	}
}

