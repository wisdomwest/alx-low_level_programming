#include "main.h"

/**
 * _strlen - get length of string
 * @s: pointer to string well okay the string
 * Return: string lenght without including null character
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
