#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function checks the code by calling the mul function
 * with different parameters and printing the results.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return (0);
}
