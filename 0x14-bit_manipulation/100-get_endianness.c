#include "main.h"

/**
  * get_endianness - endianness
  * Return: 0 or 1
  */

int get_endianness(void)
{
	unsigned short x = 45;
	char *c = (char *) &x;

	if ((int) *c == 0x2D)
		return (1);
	else
		return (0);
}
