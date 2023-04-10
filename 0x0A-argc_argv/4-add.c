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
	char *ep;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	result = 0;
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &ep, 10);
		if (*ep != '\0' || num <= 0)
	{
			printf("Error\n");
			return (1);
		}

		result += num;
	}

	printf("%d\n", result);
	return (0);
}
