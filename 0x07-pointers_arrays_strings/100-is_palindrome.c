#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(const char *s);

bool is_palindrome(const char *s)
{
    int length = strlen(s);

    if (length == 0)
    {
        return 
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - 1 - i])
        {
            return false;
        }
    }

    return true;
}
