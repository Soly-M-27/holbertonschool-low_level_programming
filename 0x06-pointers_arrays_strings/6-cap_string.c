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
	int x, j;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x == 0)
		{
			if (str[0] >= 'a' && str[0] <= 'z')
				str[0] = str[0] - 32;
		}
		
		j = x;

		while (str[j] == ',' || str[j] == ';' || str[j] == '.' ||
				str[j] == '!' || str[j] == '?' || str[j] == '"' ||
				str[j] == '(' || str[j] == ')' || str[j] == '{' ||
				str[j] == '}' || str[j] == ' ' || str[j] == '\t' ||
				str[j] == '\n')
		{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
				str[j + 1] = str[j + 1] - 32;
			j++;
		}
	}
	return (str);
}

