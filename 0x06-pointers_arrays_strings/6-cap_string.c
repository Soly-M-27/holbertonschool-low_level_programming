#include "main.h"

/**
 * cap_string - Function that capitalizes all
 * words of a string
 * @str: Holds the string
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x == 0)
		{
			if (str[x] <= 'a' && str[x] >= 'z')
				str[x] = str[x] - 32;
		}

		if (str[x] == '\t')
			str[x] = ' ';

		while (str[x] == ',' || str[x] == ';' || str[x] == '.' ||
				str[x] == '!' || str[x] == '?' || str[x] == '"' ||
				str[x] == '(' || str[x] == ')' || str[x] == '{' ||
				str[x] == '}' || str[x] == ' ' || str[x] == '\t' ||
				str[x] == '\n')
		{
			x++;
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] = str[x] - 32;
		}
	}
	return (str);
}

