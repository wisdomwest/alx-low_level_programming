#include "main.h"

/**
 * guess - finds factors since we cant use loops
 * @n: int to find square root
 * @x: guessed int
 * Return: answer
 */

int guess(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}

	else if (x * x > n)
	{
		return (-1);
	}

	else
	{
		return (guess(n, x + 1));
	}
}

/**
 * _sqrt_recursion - main function
 * @n: int to find sqrt
 * Return: answer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (guess(n, 1));
}
