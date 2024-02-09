#include <unistd.h>

/**
 * _putchar - the function prints a  character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 (success)
 * else, return 0 (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

