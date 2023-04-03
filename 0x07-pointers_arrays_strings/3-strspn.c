#include <string.h>
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

	while (*s != '\0' && strchr(accept, *s) != 0)
	{
		count++;
		s++
	}
}
