#include <stdio.h>

/**
 * fibonacciSum - Calculates the sum of even-valued terms in the Fibonacci sequence.
 *
 * @limit: The upper limit for Fibonacci sequence values.
 *
 * Description: The function calculates the sum of even-valued terms in the Fibonacci
 * sequence up to the specified limit.
 */
void fibonacciSum(int limit) {
    int a = 1, b = 2, temp, evenSum = 0;

    while (a <= limit) {
        if (a % 2 == 0) {
            evenSum += a;
        }

        // Update Fibonacci sequence
        temp = a;
        a = b;
        b = temp + b;
    }

    // Print the sum of even-valued terms
    printf("%d\n", evenSum);
}

/**
 * main - Entry point of the program.
 *
 * Description: The main function sets the limit for Fibonacci sequence values
 * and calls the fibonacciSum function to calculate and print the sum of even-valued terms.
 *
 * Return: 0 on success.
 */
int main(void) {
    // Set the limit for Fibonacci sequence values
    int limit = 4000000;

    // Calculate and print the sum of even-valued terms
    fibonacciSum(limit);

    return 0;
}

