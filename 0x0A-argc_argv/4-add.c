#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints te sum of argument positive integer numbers
 * @argc: argument count
 * @argv: arguent vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int n, sum = 0;
	char *b;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			b = argv[a];

			for (n = 0; n < strlen(b); n++)
			{
				if (b[n] < 48 || b[n] > 57)
				{
					printf("error\n");
					return (1);
				}
			}
			sum += atoi(b);
			b++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
