#include "main.h"

/**
 * _memcpy - copy memory block to another memory block
 * @dest: destination array
 * @src: source array
 * @n: number of byes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}

	return (dest);
}
