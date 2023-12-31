#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and prints
 * whether the last digit of the number is greater than 5, 0, or
 * less than 6 and not equal to 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d ad is 0\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("LAst digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
