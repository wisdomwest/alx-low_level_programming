#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file to append
 * @text_content: text to append
 * Return: 1 0r -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | OWRONLY);

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
