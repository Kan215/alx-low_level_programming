#include"main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @a: number to check bit value
 * @index: index where to check the bit
 *
 * Return: value of the bit, otherwise -1(on error)
 */
int get_bit(unsigned long int a, unsigned int index)
{
	unsigned long int divider, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divider = 1 << index;
	checker = a & divider;
	if (checker == divider)
		return (1);
	return (0);
}
