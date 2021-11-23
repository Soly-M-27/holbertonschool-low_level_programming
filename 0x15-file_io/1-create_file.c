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
	int fd, x, z;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (fd < 0)
		return (-1);

	for (x = 0; text_content[x] != '\0'; x++)
		;

	if (text_content != NULL)
	{
		z = write(fd, text_content, x);
		if (x != z)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
