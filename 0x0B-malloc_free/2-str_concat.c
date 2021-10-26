#include "main.h"

/**
 * str_concat - Function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Appended char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s1 != NULL && s2 != NULL)
	{
		s3 = malloc(strlen(s1) + strlen(s2) + 1);

		if (s3 == NULL)
			return (NULL);

		strcpy(s3, s1);
		strcpy(s3 + strlen(s1), s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		s3 = malloc(strlen(s1) + 1);

		strcpy(s3, s1);
	}

	if (s1 == NULL && s2 != NULL)
	{
		s3 = malloc(strlen(s2) + 1);

		strcpy(s3, s2);
	}

	return (s3);
}
