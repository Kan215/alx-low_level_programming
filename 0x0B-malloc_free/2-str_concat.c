#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates to strings of a given size
 * @s1: first string
 * @s2: the second string
 *
 * return: conactenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n = 0, m = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	m = i + j;
	S = malloc((sizeof(char) * m) + 1);
	if (S == NULL)
		return (NULL);
	j = 0;
	while (n < m)
	{
		if (n <= i)
			S[n] = s1[n];
		if (n >= 1)
		{
			S[n] = s2[j];
			j++;
		}
		n++;
	}
	S[n] = '\0';
	return (S);
}
