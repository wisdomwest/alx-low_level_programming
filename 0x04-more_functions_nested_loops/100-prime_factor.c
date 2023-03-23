#include <stdio.h>

/**
 * main - prime numbers highest
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long larg = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg);
	return (0);
}
