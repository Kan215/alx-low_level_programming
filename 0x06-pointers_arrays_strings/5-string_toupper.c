#include "main.h"

/**
 * String_toupper - changes all lowercase letters
 * of a string to uppercase
 * @str: The string to be converted
 * Return: A pointer to the converted string
 *
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
