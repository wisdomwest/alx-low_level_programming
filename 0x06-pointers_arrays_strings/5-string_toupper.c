#include "main.h"

/**
 * string_toupper - changes lowecase to uppercase
 * @str: string
 * Return: rev string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

	}

	return (str);
}
