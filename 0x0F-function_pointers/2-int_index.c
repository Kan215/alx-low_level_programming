#include "function_pointers.h"

/**
 * int_index -  returns the  index place if comparison = true, otherwise -1
 * @array:the  array
 * @size:the  size of elements in the  array
 * @cmp:a pointer to the  function  of one of the 3 in the main
 * Return: 0(success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
