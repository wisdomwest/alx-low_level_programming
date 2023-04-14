#include <stdlib.h>
#include "main.h"

void print_error(void);

/**
 * print_number - print number
 * @n: int
 * Return: 0
 */

void print_number(long long int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * str_len - lenght of string
 * @str: string
 * Return: lenght of string
 */

int str_len(char *str)
{
	long long int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
 * toint - convert string to int
 * @str: string
 * Return: int
 */

int toint(char *str)
{
	long long int i = 0, s = 1, num = 0;

	if (str[i] == '-')
	{
		s = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
		}
		else
		{
			print_error();
			return (0);
		}
		i++;
	}

	return (s * num);
}

/**
 * print_error - prints an error message
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * multiply - multiplies two positive numbers
 * @num1_str: the first number as a string
 * @num2_str: the second number as a string
 *
 * Return: the product of the two numbers
 */
int multiply(char *num1_str, char *num2_str)
{
	long long int num1, num2, result;

	num1 = toint(num1_str);
	num2 = toint(num2_str);

	result = num1 * num2;

	return (result);
}
/**
 * main - entry point
 * @argc: count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	long long int result;

	if (argc != 3)
	{
		print_error();
		return (98);
	}

	result = multiply(argv[1], argv[2]);
	print_number(result);
	_putchar('\n');

	return (0);
}
