#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of 
 * the string given as a parameter.
 * @str: Holds string
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *str2;

	str2 = malloc(strlen(str) + 1);

	if (str2 == NULL)
		return (NULL);

	strcpy(str2, str);

	return (str2);
}
