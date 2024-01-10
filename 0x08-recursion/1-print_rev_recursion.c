#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be printed
 * Return: NOthing
 */
void _puts_recursion(char *s)
{
        if (*s == '0')
        {
                return;
        }
        s++;
        _print_rev_recursion(s);
        s--;
        _putchar(*s);
}
