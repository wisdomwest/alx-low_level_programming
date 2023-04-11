#include <stdlib.h>
#include "main.h"

/**
 * _strdup - string duplicate
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i, len;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	p = malloc(len * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	return (p);
}
