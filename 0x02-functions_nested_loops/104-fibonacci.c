#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2. The numbers are separated by a comma and a space.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int a = 1, b = 2;
	int i;

	printf("%d, %d", a, b);

	for (i = 3; i <= 98; ++i)
	{
		int c = a + b;

		printf(", ");

		printf("%d", c);

		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
