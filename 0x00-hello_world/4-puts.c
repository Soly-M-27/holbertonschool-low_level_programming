#!/bin/bash
#include <stdio.h>
int puts(const char* str);
int main()
{
	//string initialization
	char Line[] = "Programming is like building a multilingual puzzle\n";
	puts(Line); // writing the string to stdout

	return 0;
}
