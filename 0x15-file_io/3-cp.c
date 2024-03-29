#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * main - Entry point of the prgram.
 * @argc: Number of args.
 * @argv: Array of vector args
 * Return: 0 on success, else error message
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buf[BUF_SIZE];
	struct stat st;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	return (98);
}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_from);
	return (99);
	}

	while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
	bytes_written = write(fd_to, buf, bytes_read);
	if (bytes_written != bytes_read)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_from);
	close(fd_to);
	return (99);
	}
	}

	if (bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	close(fd_from);
	close(fd_to);
	return (98);
	}

	if (fstat(fd_from, &st) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	close(fd_from);
	close(fd_to);
	return (100);
	}

	if (close(fd_from) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	return (100);
	}

	if (close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	return (100);
	}

	return (0);
}
