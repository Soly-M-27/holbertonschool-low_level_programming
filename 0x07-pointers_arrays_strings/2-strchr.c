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
	int x;
	char *p = s;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			p++;
		else
			return (NULL);
	}
		return (p);
}
