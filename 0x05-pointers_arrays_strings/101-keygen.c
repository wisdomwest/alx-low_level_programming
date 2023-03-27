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

	n = 98;
	char password[n + 1];
	const char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[];:,.<>?";

	srand(time(NULL));
	
	for (int i = 0; i < n; i++)
	{
		password[i] = charset[rand() % strlen(charset)];
	}
	password[n] = '\0';

	printf("Random password: %s\n", password);

	return 0;
}
