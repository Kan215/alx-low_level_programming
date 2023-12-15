#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:a program that prints all single digit numbers
 *of base 10 starting from 0
 * and then in uppercase
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}


