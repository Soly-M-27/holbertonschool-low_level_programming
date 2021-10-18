#include "main.h"

/**
 * _strchr - Function that locates a character in a strings and
 * prints rest of the string from the point it finds said character.
 * @s: Holds the strings in question
 * @c: Character to find within string
 *
 * Return: A pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (!*s)
			return ('\0');
		else if (*s == c)
			return (char *) s;
		s++;
	}

	return (char *)0;

/*	int x;
	char *p = s;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			p++;
	}

	if (p == s || !*s)
		return ('\0');
	else
		return (p);*/
}
