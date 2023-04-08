#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: arguments
 * @argc: argument counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
