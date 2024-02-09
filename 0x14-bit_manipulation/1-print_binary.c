#include "main.h"

/**
 * _pow - funtion prints the binary representation of a number.
 * @base: base of the exponential
 * @power: power of the exponential
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - function outputs  a number in binary notation
 * @n: number to print
 *
 * Return: 0(success)
 */
void print_binary(unsigned long int n)
{
	unsigned long int divide, checker;
	char flag;

	flag = 0;
	divide = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divide != 0)
	{
		checker = n & divide;
		if (checker == divide)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divide == 1)
		{
			_putchar('0');
		}
		divide >>= 1;
	}
}
