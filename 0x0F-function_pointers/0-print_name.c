#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -the function  prints name using pointer to function
 * @name:the  string to be added
 * @f: the pointer to the  function
 * Return: 0 (success).
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
