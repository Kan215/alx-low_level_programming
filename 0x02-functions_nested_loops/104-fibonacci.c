#include <stdio.h>

int main(void)
{
    unsigned long int first = 1, second = 2, next;
    int count;

    printf("%lu, %lu", first, second);

    for (count = 3; count <= 98; ++count)
    {
        next = first + second;
        printf(", %lu", next);

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
