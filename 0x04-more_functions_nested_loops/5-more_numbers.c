#include "main.h"

/**
* more_numbers - prints 10 times nums from 0 to 14
* Return: void
*/
void more_numbers(void)
{
	int i = 0, j;
	char c[] = "01234567891011121314";

	while (i != 10)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			_putchar(c[j]);
		}
		_putchar('\n');
		j = 0;
		i += 1;
	}
}

