#include "main.h"

/**
 * _puts - check if a number is greater than 0
 * @s: Return 0
 */
void _puts(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
