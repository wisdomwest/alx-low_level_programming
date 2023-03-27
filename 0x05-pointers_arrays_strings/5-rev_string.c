#include "main.h"

/**
 * re_string - reverse the string such that char 7 is now 2 and 2 now 7
 * @s: string
 * Return 0
 */

void rev_string(char *s)
{
	int i, h1, h2;
	char j;

	i = 0;

	while (s[i] != '\0')
	{
		i++
	}

	h2 = i - 1;

	for (h1 = 0; h1 < h2; h1++)
	{
		j = s[h1];
		s[h1] = s[h2];
		s[h2] = j;
		h2--;
	}
	
	for (h1 = 0; h1 < i / 2; h1++)
	{
		j = s[h1];
		s[h1] = s[i - h1 - 1];
		s[i - h1 - 1] = j;
	}
}
