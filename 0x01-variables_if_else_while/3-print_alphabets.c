#include <stdio.h>

/**
 * main - print alphabets
 *
 * Return: 0
 */

int main(void)
{
	char x;
	char i;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
