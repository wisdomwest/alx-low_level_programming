#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @str: The string to calculate the length of
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 * Return: The number of words in the string
 */

int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') &&
				(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' ||
				 str[i + 1] == '\0'))
		{
			count++;
		}
		if (count == 0 && i > 0)
			count = 1;
		return (count);
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: A pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	word_count = count_words(str);
	if (word_count == 0)
	{
		words = malloc(sizeof(char *));
		if (words == NULL)
			return (NULL);
		words[0] = NULL;
		return (words);
	}
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
			j++;
		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\t' &&
				str[j + len] != '\n' && str[j + len] != '\0')
			len++;
		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[j++];
		words[i][len] = '\0';
	}
	words[i] = NULL;
	return (words);
}
