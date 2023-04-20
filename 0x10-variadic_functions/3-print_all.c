#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print according to type
 * @format: format of data
 * Return: void
 */


void print_all(const char * const format, ...)
{
	va_list args;
	int i = -1, is_first_arg = 1;
	char *s;

	va_start(args, format);

	while (format && format[++i])
	{
		if (!is_first_arg)
			printf(", ");
		is_first_arg = 0;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", (s ? s : "(nil)"));
				break;
		}
	}

	printf("\n");
	va_end(args);
}
