#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase
 * Return: Return 0
 */
void pr:int_alphabet_x10 (void)
{
	int nummy, n = 0;
	
	while (n != 10)
	{
		for (nummy = 'a'; nummy <= 'z'; nummy++)
		{
			putchar(nummy);
		}
		putchar('\n');
		n++;
	}
}
