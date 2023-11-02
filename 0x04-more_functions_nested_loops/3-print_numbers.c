#include "main.c"
/**
* print numbers from 0 to 9 followed by new line
*/
void print_numbers(void)
{
int a;
for (a = 0; a <=9; a++)
{
putchar(a + '0');
}
_putchar('\n');
}
