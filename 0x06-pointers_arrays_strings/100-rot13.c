#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = *(*s + 1) + 13;
				break;
			}
		}
	}
	return (s);
}
