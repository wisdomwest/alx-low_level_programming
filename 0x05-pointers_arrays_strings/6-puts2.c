#include "main.h"

/**
 * puts2 - prints "even" charcters
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[1]);
		}

		_putchar('\n');
	}
}
