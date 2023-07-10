#include "main.h"
/**
 * error97 - print error 97
 * Return: void
*/
void error97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error98 - print error 98
 * @file: file
 * Return: void
*/
void error98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error99 - print error 99
 * @file: file
 * Return: void
*/
void error99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error100 - print error 100
 * @fd: file descriptor
 * Return: void
*/
void error100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 on success, -1 on failure
*/
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	ssize_t r;
	ssize_t w;
	int fd_from, fd_to;

	if (argc != 3)
		error97();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error98(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error99(argv[2]);

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
			error99(argv[2]);
	}
	if (r == -1)
		error98(argv[1]);
	if (close(fd_from) == -1)
		error100(fd_from);
	if (close(fd_to) == -1)
		error100(fd_to);

	return (0);
}
