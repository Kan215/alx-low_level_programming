#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest
 * @dest: The destination buffer
 * @src: The source string to be copied
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
