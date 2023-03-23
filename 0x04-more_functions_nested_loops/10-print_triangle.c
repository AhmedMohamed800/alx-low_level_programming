#include "main.h"

/**
* print_triangle - prints a triangle
* @size: the size of the trinagle
* Return: void
*/
void print_triangle(int size)
{
	int i, j, s = 1, f = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < f; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < s; j++)
			{
				_putchar('#');
			}
			f -= 1;
			s += 1;
			if (i != size - 1)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
