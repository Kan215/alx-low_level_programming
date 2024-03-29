#include "main.h"

/**
 * append_text_to_file -function that appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: The string to be  added to the end of the file.
 *
 * Return: 1  If the function fails or filename is NULL,
 *         else If the file does not exist the user lacks write permissions -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, n, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	n = write(a, text_content, length);

	if (a == -1 || n == -1)
		return (-1);

	close(a);

	return (1);
}
