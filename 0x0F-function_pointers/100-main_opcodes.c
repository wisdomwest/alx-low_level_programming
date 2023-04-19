#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *start, int num_bytes);

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on invalid argument count, 2 on negative byte count
 */
int main(int argc, char **argv)
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)main, num_bytes);

	return (0);
}

/**
 * print_opcodes - prints the opcodes of a function
 * @start: starting address of function
 * @num_bytes: number of bytes to print
 */
void print_opcodes(char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", start[i]);

		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
}
