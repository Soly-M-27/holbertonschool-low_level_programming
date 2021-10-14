#include "main.h"

/**
 * string_toupper - Function that changes all lowercase to
 * uppercase from a string
 * @str: holds char string
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		str[x] = toupper(str[x]);
	}
	return (str);
}

