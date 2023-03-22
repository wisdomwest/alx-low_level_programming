#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float evn_sum;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			evn_sum += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", evn_sum);

	return (0);
}
