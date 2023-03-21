#include <stdio.h>
#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: Return nothing
 */
void times_table(void)
{
	int i, j, incre;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			incre = (i * j);
			if ((incre / 10) > 0)
			{
				_putchar((incre / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((incre % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
