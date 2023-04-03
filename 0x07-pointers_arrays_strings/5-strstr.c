#include "main.h"

/**
 * _strstr - find string in string
 * @haystack: larger string
 * @needle: string to search in larger string
 * Return: pointer to beging og the string found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack != '\0')
	{
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
}
