#include "main.h"

/**
 * _strspn - check how many times certain char are in string
 * @s: string to be checked
 * @accept: char to check if are in s
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_char = 0;
	char *a;

	while (*s != '\0')
	{
		is_char = 0;
		for (a = accept; *a != '\0'; a++)
		{
			if (*S == *a)
			{
				is_char = 1;
				break;
			}
		}

		if (!is_char)
		{
			return (count);
		}
		
		count++;
		s++;
	}

	return (count);
}
