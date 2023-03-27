#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - entry point
 * @n: pasword length
 * Return: 0
 */

int main(void)
{
	int n;
	int i;
	char p[99];

	n = 98;
	const char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[];:,.<>?";

	srand(time(NULL));
	
	for (i = 0; i < n; i++)
	{
		p[i] = charset[rand() % strlen(charset)];
	}
	p[n] = '\0';

	printf("Random password : %s\n", p);

	return 0;
}
