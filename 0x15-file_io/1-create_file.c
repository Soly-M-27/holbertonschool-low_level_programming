#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: Name of file
 * @text_content: NULL terminated string to write to
 * the file
 *
  * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, x;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_CREAT | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);
	return (1);

	for (x = 0; text_content[x] != '\0'; x++)
		;

	write(fd, text_content, x);

	close(fd);

	return (1);
}
