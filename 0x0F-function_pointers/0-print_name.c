#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print name
 * @name: name
 * @f: function of name
 * Return: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
