#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character to fill the array
 *
 * Return: Array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *S;

	if (size == 0)
		return (NULL);

	S = malloc(size * sizeof(char));
	if (S == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		S[a] = c;
	}
	return (S);
}
