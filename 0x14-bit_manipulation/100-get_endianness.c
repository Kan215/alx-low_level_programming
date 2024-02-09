#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big endian,else return 1
 */
int get_endianness(void)
{
	int m;
	char *n;

	m = 1;
	n = (char *)&m;
	return (*n);
}
