#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:a program that prints all single digit numbers of base ten
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
