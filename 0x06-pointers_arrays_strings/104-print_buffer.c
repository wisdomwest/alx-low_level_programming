#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int start, end, i, ch;

	for (start = 0; start < size; start += 10)
	{
		end = (size - start < 10) ? size - start : 10;
		printf("%08x: ", start);
		for (i = 0; i < end; i++)
		{
			printf("%02x", *(b + start + i));
			if (i % 2)
				printf(" ");
		}

		for (i = end; i < 10; i++)
			printf("   ");
		for (i = 0; i < end; i++)
		{
			ch = *(b + start + i);
			if (ch >= 32 && ch <= 126)
				printf("%c", ch);
			else
				printf(".");
		}

		printf("\n");
	}
}
