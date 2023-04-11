#include <stdlib.h>
#include "main.h"

/**
 * str_concat - cont two strings
 * @s1: string one
 * @s2: string 2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j ;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
