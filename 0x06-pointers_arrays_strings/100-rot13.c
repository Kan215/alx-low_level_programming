#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 * Return: A pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		char c = str[index];

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			char base = (c >= 'a') ? 'a' : 'A';

			str[index] = (c - base + 13) % 26 + base;
		}
	}

	return (str);
}
