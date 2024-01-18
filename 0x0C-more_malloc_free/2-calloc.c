#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: A pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int total_size = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	p = malloc(total_size);

	if (p == NULL)
		return (NULL);

	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
