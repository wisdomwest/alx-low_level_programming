#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer to string of binary
 * Return: 0 or binary
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result <<= 1;
			result += *b - '0';
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (result);
}
