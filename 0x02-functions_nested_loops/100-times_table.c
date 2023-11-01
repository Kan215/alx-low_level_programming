#include "main.h"
#include <stdio.h>
/**
*
*/

void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
for (int i = 0; i <= 15; i++)
{
for (int j = 0; j <= n; j++)
{
int product = i * j;
if(j>0)
{       
printf(", ");
}
if (product < 10)
{
printf("  %d", product);
}
else if (product < 100)
{
printf(" %d", product);
}
else
{
printf("%d", product);
}
}
printf("\n");
}
}
}
