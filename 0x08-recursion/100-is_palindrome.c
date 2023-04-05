#include "main.h"

/**
 * length - find length of string
 * @s: dtring
 * Return: string length
 */

int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + length(s + 1));
	}
}

/**
 * helper - get memory in order
 * @i: start
 * @j: end
 * Return: 0 or 1
 */

int helper(char *i, char *j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (*i != *j)
	{
		return (0);
	}
	else
	{
		return (helper(i + 1, j - 1));
	}
}
/**
 * is_palindrome - checks string if its palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	return (helper(s, s + length(s) - 1));
}
