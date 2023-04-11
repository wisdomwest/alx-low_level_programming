#include <stdlib.h>
#include "main.h"

/**
 * argstostr - cont arguments to functions
 * @ac: argument counter
 * @av: arguments array
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j])
		{
			len++;
			j++;
		}

		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
