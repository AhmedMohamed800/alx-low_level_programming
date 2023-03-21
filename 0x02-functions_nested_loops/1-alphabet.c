#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * Return: Return 0
 */
void print_alphabet(void)
{
	int nummy;

	for (nummy = 'a'; nummy < 'z'; nummy++)
	{
		putchar(nummy);
	}
	putchar('\n');
}
