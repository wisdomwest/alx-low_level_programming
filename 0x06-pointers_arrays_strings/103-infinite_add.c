#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer to store the result.
 * @size_r: buffer size:
 * Return:pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, sum, k, s1, s2, add = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		k = i;
	else
		k = j;
	if (size_r <= k + 1)
		return (0);
	r[k + 1] = '\0';
	i--, j--, size_r--;
	s1 = *(n1 + i) - 48, s2 = *(n2 + j) - 48;
	while (k >= 0)
	{
		sum = s1 + s2 + add;
		if (sum >= 10)
			add = sum / 10;
		else
			add = 0;
		if (sum > 0)
		*(r + k) = (sum % 10) + 48;
		else
			*(r + k) = '0';
		if (i > 0)
			i--, s1 = *(n1 + i) - 48;
		else
			s1 = 0;
		if (j > 0)
			j--, s2 = *(n2 + j) - 48;
		else
			s2 = 0;
		k--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
