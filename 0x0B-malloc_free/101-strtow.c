#include <stdlib.h>
#include "main.h"

/**
 * count_word - Helper function for counting the number of words in a string.
 * @s: String to evaluate.
 *
 * Return: Number of words.
 */
int count_word(char *s)
{
	int flag, i, j;

	flag = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}

	return (j);
}

/**
 * copy_word - Helper function to copy a word from a string.
 * @start: Starting index
 * @end: Ending index
 * @str: String to copy
 *
 * Return: Pointer to the copied word.
 */
char *copy_word(int start, int end, char *str)
{
	char *word;
	int i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));

	if (word == NULL)
		return (NULL);

	for (i = 0; start < end; i++)
		word[i] = str[start++];

	word[i] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: String to be split.
 *
 * Return: Pointer to an array of strings (Success) or NULL (Error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, j = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = copy_word(start, end, str);

				if (tmp == NULL)
					return (NULL);

				matrix[k] = tmp;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
