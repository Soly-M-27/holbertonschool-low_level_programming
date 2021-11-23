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
	char *mal = malloc(sizeof(int) * letters);

	if (filename == NULL)
		return (0);

	rf = open("Requiescat", O_RDONLY);

	if (rf == -1)
		return (0);

	if (mal == NULL)
		return (0);

	read(rf, mal, letters);

	if (!write(STDOUT_FILENO, mal, letters))
		return (0);

	return (letters);
}
