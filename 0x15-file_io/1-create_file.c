#include "main.h"

/**
 * create_file - create file
 * @filename: desired file name
 * @text_content: text to be saved
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		n = write(fd, text_content, strlen(text_content));

		if (n < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
