#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal
* @n: number of diagonals
* Return: void
*/
void print_diagonal(int n)
{
	int i = 0;

	while (i != n && n > 0)
	{
		_putchar(' ');
		i += 1;
	}
	if (n > 0)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
