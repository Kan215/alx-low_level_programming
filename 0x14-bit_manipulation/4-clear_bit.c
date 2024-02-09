#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @a: parameter to set
 * @index: index at which to set the bit
 * Return: 1 (success),else return -1
 */
int clear_bit(unsigned long int *a, unsigned int index)
{
	if (index > sizeof(a) * 8)
		return (-1);
	*a &= ~(1 << index);
	return (1);
}
