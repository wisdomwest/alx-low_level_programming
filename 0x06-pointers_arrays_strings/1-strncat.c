#include "main.h"

/**
 * _strncat - cat 2 strings together with n bytes
 * @dest: destination string
 * @src: source string
 * @n: bytes
 * Return: dest as merged with src string(as a pointer)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
