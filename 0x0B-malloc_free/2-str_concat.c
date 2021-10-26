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

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s3 = malloc(strlen(s1) + strlen(s2) + 1);

	if (s3 == NULL)
		return (NULL);

	if (s1 != NULL && s2 == NULL)
	{
		strcpy(s3, s1);
		strcpy(s3 + strlen(s1), s1);
	}

	if (s1 == NULL && s2 != NULL)
	{
		strcpy(s3, s2);
		strcpy(s3 + strlen(s2), s2);
	}

	if (s1 != NULL && s2 != NULL)
	{
		strcpy(s3, s1);
		strcpy(s3 + strlen(s1), s2);
	}

	return (s3);
}
