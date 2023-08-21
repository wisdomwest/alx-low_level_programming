#include "main.h"

/**
 * _strcat - combines two strinngs together
 * @dest: destination string
 * @src: source string
 * Return: a pointer pointing to the begining of the dst string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
