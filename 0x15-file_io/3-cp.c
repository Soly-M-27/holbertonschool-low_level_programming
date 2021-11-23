#include "main.h"

void cp_file(char *f_from, char *f_to);

/**
 * main - Program that copies the content of a file
 * to another file
 * @ac: Number of arguments
 * @av: strings
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_file(av[1], av[2]);

	return (0);
}

/**
 * cp - Function that copies contents of file
 * into another file
 * @f_from: First File
 * @f_to: Second File
 *
 * Return: void
 */

void cp_file(char *f_from, char *f_to)
{
	int from_NO, to_NO, x;
	char tmp[1024];

	from_NO = open(f_from, O_RDONLY);
	x = read(from_NO, tmp, 1024);

	if (from_NO == -1 || !f_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	to_NO = open(f_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);

	while((x = read(from_NO, tmp, 1024)) > 0)
	{
		if (to_NO == -1 || write(to_NO, tmp, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", to_NO);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	if (close(from_NO) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_NO);
		exit(100);
	}
	if (close(to_NO) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_NO);
		exit(100);
	}
}
