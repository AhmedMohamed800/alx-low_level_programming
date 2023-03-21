#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the value of the last digit
 * @n: an integer
 * Return: Return the last digit
 */
int print_last_digit(int n)
{
	int after_mod = n % 10;

	if (after_mod < 0)
	{
		after_mod *= -1;
	}
	_putchar (after_mod + '0');
	return (after_mod);

}
