#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: Name of file
 * @letters: Amount of letters to read and print
 *
 * Return: if write fails or does not write the expected amount
 * of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rf;
	char *mal = malloc(sizeof(char) * letters);
	int x, z;

	if (mal == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	rf = open(filename, O_RDONLY);

	z = read(rf, mal, letters);
	x = write(STDOUT_FILENO, mal, z);

	if (x != z || rf < 0 || z < 0)
	{
		free(mal);
		close(rf);
		return (0);
	}

	free(mal);

	close(rf);

	return (x);
}
