#include "main.h"
#include <stdlib.h>

/**
 * array_range - function to create an array of integers.
 * @min: minimum int
 * @max: max int
 *
 * Return: int value.
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
