#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints the value of the last digit
 * Return: Return nothing
 */
void jack_bauer(void)
{
	int first = 0, second = 0, third = 0, forth = 0;

	while (first != 2 && second != 3 && third != 5 && forth != 9)
	{
		putchar(first);
		putchar(second);
		putchar(':');
		putchar(third);
		putchar(forth);
		if (forth < 9)
		{
			forth += 1;
		} else if (forth == 9)
		{
			forth = 0;
			third += 1;
		}
		if (third == 6 && forth == 0 && second != 9)
		{
			third = 0;
			forth = 0;
			second += 1;
		}
		else if (second == 9 && thinrd == 6 && forth == 0)
		{
			first += 1;
			second = 0;
			third = 0;
			forth = 0;
		}
	}

}
