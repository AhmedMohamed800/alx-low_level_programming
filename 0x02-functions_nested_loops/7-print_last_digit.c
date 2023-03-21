#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the value of the last digit
 * @n: an integer
 * Return: Return the last digit
 */
int print_last_digit(int n)
{
	if (n % 10 > 0)
	{
		return ((n % 10) * -1);
	}
	_putchar (n % 10 + '0');
	return (n % 10);

}
