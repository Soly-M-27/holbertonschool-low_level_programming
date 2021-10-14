#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @str: Holds string
 *
 * Return: char str
 */

char *leet(char *str)
{
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int x, z;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (z = 0; l[z] != '\0'; z++)
		{
			if (str[x] == l[z])
			{
				str[x] = n[z];
			}
		}
	}

	return (str);
}


