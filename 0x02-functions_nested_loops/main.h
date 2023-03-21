#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * print_alphabet - prints the alphabet
 * Return: Return nothing
 */
void print_alphabet(void)
{
	int nummy;

	for (nummy = 97; nummy < 123; nummy++)
	{
		putchar(nummy);
	}
	putchar('\n');
}
#endif
