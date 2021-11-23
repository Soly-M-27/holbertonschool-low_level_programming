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
	if (av[1] == NULL || av[2] == NULL)
		return (0);

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
	int from_NO, to_NO, x, c1, c2;
	char tmp[1024];

	from_NO = open(f_from, O_RDONLY);
	x = read(from_NO, tmp, 1024);

	if (from_NO == -1 || x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	to_NO = open(f_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (to_NO == -1 || write(to_NO, tmp, x) != x)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", to_NO);
		exit(99);
	}
	c1 = close(from_NO);
	if (c1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_NO);
		exit(100);
	}
	c2 = close(to_NO);
	if (c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_NO);
		exit(100);
	}
}
