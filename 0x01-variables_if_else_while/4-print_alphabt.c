#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet in lower case while excluding q and e
 * Return: Returns 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		switch (x)
		{
			case 'q':
				continue;
			case 'e':
				continue;
		}

		putchar(x);

		if (x == 'z')
		{
			putchar('\n');
		}

	}

	return (0);
}
