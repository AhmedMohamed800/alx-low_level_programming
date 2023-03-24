#include "main.h"

/**
* print_number - prints an integer
* @n: integer to print
* Return: void
*/
void print_number(int n)
{
	int num = n;

	if (num == 0)
	{
		_putchar('0');
	}
	else if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	while (num)
	{
		_putchar((num % 10) + '0');
		num = num / 10;

	}
}
