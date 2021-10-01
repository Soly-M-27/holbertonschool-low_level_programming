#include <stdio.h>
#include <conio.h>

/**
 * main - Prints a string without using puts or printf
 * Return: Returns 1
 */

int main(void)
{

	char ch = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	char far *pointer = (char far *) 0xb8000000;
	*pointer = ch;
	getch();
	return (1);
}
