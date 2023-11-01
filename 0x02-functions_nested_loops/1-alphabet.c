#include "main.h"
/**
* main - Start execution
* Description: prints the alphabet, in lowercase
* Return: 0(Success)
*/
#include <unistd.h>
int _putchar(char c);
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

