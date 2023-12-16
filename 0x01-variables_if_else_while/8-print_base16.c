#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: a program that prints all the numbers of base 16
 * in lowercase
 * and then in uppercase
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	char c;

	for (a = '0'; a <= '9'; a++)
		putchar(a);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
