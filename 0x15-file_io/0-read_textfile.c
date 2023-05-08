#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and print to POSIX
 * @filename: pointer to file
 * @letters: number of letters to print
 * Return: 0 or letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t s_read, s_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(letters * sizeof(char));

	if (buff == NULL)
		return (0);

	s_read = read(fd, buff, letters);

	if (s_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	s_written = write(STDOUT_FILENO, buff, s_read);

	if (s_written == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (s_written);
}
