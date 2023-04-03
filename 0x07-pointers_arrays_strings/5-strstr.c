#include "main.h"

/**
 * _strstr - find string in string
 * @haystack: larger string
 * @needle: string to search in larger string
 * Return: pointer to beging og the string found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		
		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack = h + 1;
	}
	return (0);
}
