#include "main.h"

/**
 * _isupper - checks if letter is uppercase or lowercase
 * @c: character to be checked
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
