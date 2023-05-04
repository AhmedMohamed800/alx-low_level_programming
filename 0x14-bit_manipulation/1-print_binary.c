#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: number to be converted
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8, i;
	int printed = 0;
	unsigned long int mask;

	for (i = size - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
	
	}
	if (!printed)
	{
		_putchar('0');
	}
}
