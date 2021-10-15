#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13
 * @str: Holds string
 *
 * Return: char str
 */

char *rot13(char *str)
{
	char a[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char RotA[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',
		'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
		'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'};
	int x, z;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (z = 0; a[z] != '\0'; z++)
		{
			if (str[x] == a[z])
			{
				str[x] = RotA[z];
				break;
			}
		}
	}

	return (str);
}
