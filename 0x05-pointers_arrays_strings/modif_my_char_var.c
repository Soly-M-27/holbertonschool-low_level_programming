#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of 'c' before call: %c\n", c);
	printf("Adress of 'c': %p\n\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("Adress of 'p': %p\n\n", &p);
	modif_my_char_var(p, c);
	printf("Value of 'c' after call: %c\n", c);
	printf("Value of 'p' after call: %p\n\n", p);
	printf("Adress of 'c': %p\n", &c);
	printf("Adress of 'p': %p\n", &p);

	return (0);
}
