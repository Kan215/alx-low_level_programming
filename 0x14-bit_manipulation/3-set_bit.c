#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @a: number to set the bit value
 * @index: index where to set bit
 *
 * Return: 1(success),otherwise return -1 on error
 */
int set_bit(unsigned long int *a, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*a = *a | setbit;
	return (1);
}

