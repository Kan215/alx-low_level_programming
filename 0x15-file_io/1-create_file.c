#include "main.h"

/**
 * create_file -function that creates a file.
 * @filename: A pointer to the new file created
 * @text_content: pointer to a string to write to the file.
 *
 * Return: -1 If the function fails.
 *         else return 1.
 */
int create_file(const char *filename, char *text_content)
{
	int wd, n, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	wd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(wd, text_content, length);

	if (wd == -1 || n == -1)
		return (-1);

	close(wd);

	return (1);
}
