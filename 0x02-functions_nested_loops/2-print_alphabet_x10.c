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
char  alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
_putchar('\n');
return (0);
char letter = 'a';
while (letter <= 'z')
{
__putchar(letter);
letter++;
}
__putchar('\n');
}

