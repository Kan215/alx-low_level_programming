#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: is the character to be printed
 * Return: On success 1.
 * On error, return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
