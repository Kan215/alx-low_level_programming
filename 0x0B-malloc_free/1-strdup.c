#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that duplicates a string
 * @str: the string to be duplicated
 *
 * Return: The duplicated string
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 1;
	char *S;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}
	S = malloc((sizeof(char) * j) + 1);
	if (S == NULL)
		return (NULL);
	while (i < 1)
	{
		S[i] = str[i];
		i++;
	}
	S[i] = '\0';
	return (S);
}
