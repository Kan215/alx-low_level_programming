#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:a program that prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
