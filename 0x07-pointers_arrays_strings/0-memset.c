#include "main.h"

/**
 * _memset - print to certain memory space
 * @s: array
 * @b: value to be printed
 * @n: size of array to be printed to
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
