#include <stdio.h>
#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: Return nothing
 */
void times_table(void)
{
	int times = 0, i = 0;

	while (times != 10)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (i = 0; i < 9; i++)
		{
			if (i + times > 9)
			{
				_putchar(((i + times) / 10) + '0');
				_putchar(((i + times) % 10) + '0');
			} else
			{	
				_putchar((i + times) + '0');
			}
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
		times += 1;
	}
}

