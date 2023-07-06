#include "main.h"

/**
  * get_bit - get bit at specific index
  * @n: binary number
  * @index: index to get
  * Return: binary at index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
