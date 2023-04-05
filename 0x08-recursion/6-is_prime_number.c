#include "main.h"

/**
 * helper - helps go thru numbers till divisible by only 1
 * @n: int to check
 * @i: diviser
 * Return: 1 or 0
 */

int helper(int n, int i)
{
	if (i == 1)
	{
		return (i);
	}

	else if (n % i == 0)
	{
		return (0);
	}

	else
	{
		return (helper(n, i - 1));
	}
}

/**
 * is_prime_number - main function
 * @n: int to check
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	else
	{
		return (helper(n, n -  1));
	}
}
