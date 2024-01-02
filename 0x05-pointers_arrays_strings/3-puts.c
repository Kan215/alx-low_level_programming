#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string to be printed
 *
 * Description: This function prints each character of the given string
 * followed by a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
