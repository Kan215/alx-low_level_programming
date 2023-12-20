/* fibonacci_sequence.c -- Computes the Fibonacci sequence */

#include <stdio.h>

/*
 * fibonacci_sequence -- Computes the first n Fibonacci numbers and prints them
 *
 * n - the number of Fibonacci numbers to compute and print
 */
void fibonacci_sequence(int n) {
    int sequence[n];
    sequence[0] = 1;
    sequence[1] = 2;
    for (int i = 2; i < n; i++) {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }

    for (int i = 0; i < n; i++) {
        printf("%d", sequence[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    fibonacci_sequence(50);
    return 0;
}
