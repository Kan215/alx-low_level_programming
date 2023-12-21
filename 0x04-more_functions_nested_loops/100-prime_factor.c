#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the given number
 */
long largest_prime_factor(long n)
{
	long max_prime = -1;
	long i;

	/* Divide the number by 2 until it becomes odd */
	while (n % 2 == 0)
	{
		max_prime = 2;
		n = n / 2;
	}

	/* Divide the number by odd numbers starting from 3 */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}

	/* If the remaining number is a prime greater than 2 */
	if (n > 2)
		max_prime = n;

	return (max_prime);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}
