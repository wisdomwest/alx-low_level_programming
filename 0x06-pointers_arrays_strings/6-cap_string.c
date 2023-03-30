#include "main.h"

/**
 * cap_string - cap string apart from separtors
 * @s: string
 * Return: 0
 */

char *cap_string(char *s)
{
	int count = 0, i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 'a' && *(s + count) <= 'z')
	{
		*(s + count) = *(s + count) - 32;
		count++;
	}

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == separators[i])
			{
				if ((*(s + (count + 1)) >= 'a') && (*(s + (count + 1)) <= 'z'))
				{
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
					break;
				}
			}
			count++;
		}
	}

	return (s);
}
