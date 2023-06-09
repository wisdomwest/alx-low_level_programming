#include "main.h"

/**
  * binary_to_uint - convert binary to base 10
  * @b: pointer to binary
  * Return: 0 or base 10
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			decimal = decimal * 2;
			decimal += *b - '0';
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (decimal);
}
