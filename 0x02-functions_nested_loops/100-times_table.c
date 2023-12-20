#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The value for the times table
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, result, hundreds, tens, ones;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;

            if (j > 0)
            {
                _putchar(',');
                _putchar(' ');
                if (result < 10)
                    _putchar(' ');
                if (result < 100)
                    _putchar(' ');
            }

            hundreds = result / 100;
            tens = (result / 10) % 10;
            ones = result % 10;

            if (result >= 100)
            {
                _putchar('0' + hundreds);
                _putchar('0' + tens);
            }
            else if (result >= 10)
            {
                _putchar(' ');
                _putchar('0' + tens);
            }
            else
            {
                if (j > 0)
                    _putchar(' ');
            }

            _putchar('0' + ones);
        }
        _putchar('\n');
    }
}
