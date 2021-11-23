#include "main.h"

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
	int f_f, f_t;

	if (ac != 3)
	{
		exit(97);
		printf("Usage: cp file_from file_to\n");
	}

	f_t = open("file_to", O_CREATE | O_TRUNC, 00664);

	f_f = open("file_from", O_RDONLY);

	if (!f_f)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
	}

	read(f_f, av[1], 1024);
	write(STDOUT_FILENO, f_t, 1024);

	close(f_t);
	close(f_f);

	if (!(close(f_f)))
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %s\n", av[1]);
	}

	if (!(close(f_t)))
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %s\n" av[2]);
	}

	return (0);
}
