#include "main.h"
#include <stdio.h>

/**
 * error - print errro message
 * @msg: message
 * @filename: filename
 * @code: exit code
 */
void error(char *msg, const char *filename, int code)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(code);
}

/**
 * main - entry point cp function
 * @argc: counter
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	const char *from, *to;

	int fd[2];
	char buff[BUFFER_SIZE];
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to", argv[0]);
		dprintf(STDERR_FILENO, "\n");
		exit(97);
	}

	from = argv[1];
	to = argv[2];

	fd[0] = open(from, O_RDONLY);

	if (fd[0] < 0)
	{
		error("ERROR: Can't read from file %s\n", from, 98);
	}

	fd[1] = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd[1] < 0)
		error("ERROR: Can't write to %s", to, 99);

	r = read(fd[0], buff, BUFFER_SIZE);
	if (r < 0)
		error("ERROR: Can't read from file %s\n", from, 98);

	w = write(fd[1], buff, r);

	if (w != r)
		error("ERROR: Can't write to %s", to, 99);

	if (close(fd[0]) < 0)
		error("Error: Can't close fd %d", from, 100);

	if (close(fd[1]) < 0)
		error("Error: Can't close fd %d", to, 100);

	return (0);
}
