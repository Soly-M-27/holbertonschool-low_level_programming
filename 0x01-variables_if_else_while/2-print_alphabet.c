#include <stdio.h>
#include <ctype.h>
/**
 * main - Print alphapet in lower case with putchar
 * Return: Returns 0
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);
putchar (lower_x);

		if (lower_x == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
