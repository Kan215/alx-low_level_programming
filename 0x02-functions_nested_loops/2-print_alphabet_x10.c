#include "main.h"

int _putchar(char c);

void print_alphabet_x10(void)
{
    char letter;
    int count;

    count = 0;
    while (count < 10)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
        count++;
    }
}

