#include "main.h"
/**
 * _puts - print a string to thr string
 * @str: string to be printed
 * Return length of string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
