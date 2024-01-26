#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the function returns the sum of all digit parameters
 * @n: the number of parameters passed by the user to the function
 * @...:variable number of parameter whose sum is to be calculated
 *
 * Return: 0 if n == 0, else rerurn the sum parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
