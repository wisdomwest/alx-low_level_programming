#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - cat two strings
 * @s1: string one
 * @s2: string 2
 * @n: size
 * Return: pointer to cat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int l1 = 0, l2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;

	cat = malloc(l1 + n + 1);
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		cat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		cat[i + j] = s2[j];
	}

	cat[i + j] = '\0';

	return (cat);
}
