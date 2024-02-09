#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @p:a  pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary num, else return 0 (error)
 */
unsigned int binary_to_uint(const char *p)
{
	int i;
	unsigned int num;

	num = 0;
	if (!p)
		return (0);
	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] != '0' && p[i] != '1')
			return (0);
	}
	for (i = 0; p[i] != '\0'; i++)
	{
		num <<= 1;
		if (p[i] == '1')
			num += 1;
	}
	return (num);
}
