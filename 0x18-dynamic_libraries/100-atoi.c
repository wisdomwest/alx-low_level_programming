#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int num = 0;
	int sign = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sign *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			num = (num * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	num *= sign;
	return (num);
}
