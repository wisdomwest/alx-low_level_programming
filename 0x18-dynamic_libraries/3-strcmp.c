#include "main.h"

/**
 * _strcmp - comapre if two strings are identical
 * @s1: string one
 * @s2: string two
 * Return: 0 if same otherwise non zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
