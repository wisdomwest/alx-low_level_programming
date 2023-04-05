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
 * is_palindrome - checks string if its palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = length(s);

	if (len <= 1)
	{
		return (1);
	}

	if (*s == *(s + len - 1))
	{
		*(s + len - 1) = '\0';
		return (is_palindrome(s + 1));
	}

	else
	{
		return (0);
	}
}
