include "main.h"

/**
 * _puts_recursion - print characters 
 * @s: string to be printed to screen
 * Return: string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
