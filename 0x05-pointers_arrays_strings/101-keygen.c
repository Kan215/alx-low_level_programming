#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates a random password for 101-keygen
 *
 * Return: Always 0
 */
int main(void)
{
	char password[12];
	int i;

	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
		password[i] = rand() % (90 - 65 + 1) + 65;
	}

	password[11] = '\0';

	printf("%s\n", password);

	return (0);
}
