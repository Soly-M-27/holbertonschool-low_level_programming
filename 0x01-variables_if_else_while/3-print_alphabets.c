#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints alphabet in lower and upper case with putchar
 * Return: Returns 0
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{

		int lower_x = tolower(x);

		putchar(lower_x);

		if (lower_x == 'z')
		{
			for (x = 'a'; x <= 'z'; x++)
			{
				int upper_x = toupper(x);

				putchar(upper_x);

				if (upper_x == 'Z')
				{
					putchar('\n');
				}
			}
		}
	}

	return (0);
}
