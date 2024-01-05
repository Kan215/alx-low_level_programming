#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
	int index;
	char leetMap[5] = {'a', 'e', 'o', 't', 'l'};
	char leetReplacements[5] = {'4', '3', '0', '7', '1'};

	for (index = 0; str[index]; index++)
	{
		int i;

		for (i = 0; i < 5; i++)
		{
			if (str[index] == leetMap[i] || str[index] == leetMap[i] - 'a' + 'A')
			{
				str[index] = leetReplacements[i];
				break;
			}
		}
	}

	return (str);
}
