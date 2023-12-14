#include <stdio.h>
/**
* main - to print the size of the various types
* Return : Always 0.
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of double: %zu byte(s)\n", sizeof(double));
return (0);
}

