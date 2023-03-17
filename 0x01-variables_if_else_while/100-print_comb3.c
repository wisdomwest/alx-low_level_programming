#include <stdio.h>
#include <unistd.h>

/**
 * main - Print combos 2 int
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int i;

	for (x = '0'; x <= '9'; x++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (x < i)
			{
				putchar(x);
				putchar(i);

				if (x != '8' || (x == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
