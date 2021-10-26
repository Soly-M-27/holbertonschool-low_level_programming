#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *s;
	char *c;
	char *d;

	s = str_concat("Best ", "School");
	c = str_concat("Hello", NULL);
	d = str_concat(NULL, "Hello");

	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	printf("%s\n", c);
	printf("%s\n", d);
	free(s);
	return (0);
}
