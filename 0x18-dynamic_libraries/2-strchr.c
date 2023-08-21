#include "main.h"

/**
 * _strchr - check occarance of char in string
 * @s: string to check
 * @c: char to be chacked in the string
 * Return: pointer to occarance to the char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
