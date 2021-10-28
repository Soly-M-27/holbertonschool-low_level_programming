#include "main.h"

/**
 * string_nconcat - Funtion that concatenates two strings
 * @s1: First string
 * @s2: second string
 * @n: unsigned int
 *
 * Return: pointer or NULL if malloc fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int x = 0, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	s3 = malloc(sizeof(char) * x + 1);

	if (s3 == NULL)
		return (NULL);

	for (x = 0, y = 0; s1[y] != '\0'; x++, y++)
		s3[x] = s1[y];
	for (y = 0; s2[y] != '\0' && y < n; y++, x++)
		s3[x] = s2[y];

	return (s3);
}
