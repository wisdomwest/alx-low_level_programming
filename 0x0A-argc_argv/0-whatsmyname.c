#include "main.h"

/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	char *name = argv[0];

	while (*name)
	{
		_putchar(*name);
		name++;
	}

	_putchar('\n');

	return (0);
}
