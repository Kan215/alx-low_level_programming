#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y
 * @x: the value to multiply
 * @y: the times to multiply with x
 *
 * Return: The value to be multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
