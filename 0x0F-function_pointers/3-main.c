#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed to program
 * @argv: array of pointers to each argument
 *
 * Return: 0 on success, exit with 98, 99, or 100 on failure
 */
int main(int argc, char **argv)
{
	int a, b, res;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = op_func(a, b);
	printf("%d\n", res);

	return (0);
}
