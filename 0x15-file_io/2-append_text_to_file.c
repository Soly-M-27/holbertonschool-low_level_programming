#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end
 * of a file
 * @filename: Name of file
 * @text_content: NULL terminated string to add at the end of
 * the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_CREAT | O_APPEND, 00664);

	if (fd == -1)
		return (-1);

	for (x = 0; text_content[x] != '\0'; x++)
		;

	write(STDOUT_FILENO, filename, x);

	close(fd);

	return (1);
}
