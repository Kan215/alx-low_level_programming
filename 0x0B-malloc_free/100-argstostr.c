#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments in a code
 * @ac: Total Number of arguments.
 * @av: Array of argument strings/ vestor array
 *
 * Return: Pointer to a newly allocated string containing all arguments.
 */
char *argstostr(int ac, char **av)
{
	int a, m, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (m = 0; av[a][m]; m++)
			l++;
	}

	l += ac;

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (m = 0; av[a][m]; m++)
		{
			str[k] = av[a][m];
			k++;
		}

		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}

	return (str);
}
