#include <stdio.h>
#include <stdlib.h>

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
