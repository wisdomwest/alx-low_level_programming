#include <stdio.h>
#include <stdlib.h>

/**
 * positive - checks if number is more than 0
 * @str: pointer
 * Return: 0
 */

int positive(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}

	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (0);
		}

		str++;
	}

	return (1);
}

/**
 * main - entry point
 * @argv: arguments
 * @argc: counter
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int num, result, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	result = 0;
	for (i = 1; i < argc; i++)
	{
		if (!postive(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		result += num;
	}

	printf("%d\n", result);
	return (0);
}
