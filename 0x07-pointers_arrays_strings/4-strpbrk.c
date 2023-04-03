#include "main.h"

/**
 * _strpbrk - find first occarance of char
 * @s: string to check
 * @accept: char to be checked
 * Return: pointer to first occurance of the char
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}

		s++;
	}

	return (0);
}
