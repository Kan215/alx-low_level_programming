#include "main.h"
#include <stdio.h>

/**
 * main - outputs the number of arguments
 * @argc: the argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
