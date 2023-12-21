#include "main.h"

/**
 * print_triangle - Prints a triangle on the terminal
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
    int i, space, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)
    {
        /* Leading spaces */
        for (space = size - i; space > 0; space--)
            _putchar(' ');

        /* '#' characters */
        for (j = 1; j <= i; j++)
            _putchar('#');

        _putchar('\n');
    }
}
