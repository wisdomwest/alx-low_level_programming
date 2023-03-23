#include "main.h"

/**
 * print_diagonal - prints diagnols
 * @n: number of times
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			putchar(' ');
			j++;
		}

		putchar('\\');
		putchar('\n');
		i++;
	}
	if (i == 0)
		putchar('\n');
}
