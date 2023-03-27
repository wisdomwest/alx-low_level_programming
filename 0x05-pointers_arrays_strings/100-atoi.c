#include <stdio.h>

int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;

	if (s[0] == '-' || s[0] == '+')
	{
		if (s[0] == '-')
		{
			sign = -1;
		}
		
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else
		{
			return (0);
		}
	}
}
