#include "main.h"

/**
 * _isdigit - checks if number is a digit
 * @c: digit to e checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
