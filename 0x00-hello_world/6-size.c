
# include <stdio.h>
/**
 * main - A program to print the size of various computer types
 * Return o (success)
 */
int main(void)
{       
        char a;
        int b;
        long int c;
        long long int d;
        float f;
printf("size of a char: %zu byte(s)\n",(unsigned long)sizeof(a));
printf("size of a int: %zu byte(s)\n",(unsigned long)sizeof(b));
printf("size of a long int: %zu byte(s)\n",(unsigned long)sizeof(c));
printf("size of a long long: %zu byte(s)\n",(unsigned long)sizeof(d));
printf("size of a float: %zu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
