#include "main.h"

/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *name = argv[0];

	(void)argc;

	while (*name)
	{
		_putchar(*name);
		name++;
	}

	_putchar('\n');

	return (0);
}
