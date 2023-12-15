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

	char c;

	int a;

	c = 'a';
	a = 0;
	while
		(a < 10) {
			putchar(a + '0');
			a++;

		}
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
