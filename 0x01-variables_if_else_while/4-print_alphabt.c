#include <stdio.h>
#include <unistd.h>

/**
 * main - Print except q and e
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
