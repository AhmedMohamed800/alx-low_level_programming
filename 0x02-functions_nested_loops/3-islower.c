#include <stdio.h>
#include "main.h"

/**
 * _islower - print if the charcher is lowercase or not
 * @c: single letter input
 * Return: Return 1 if c is lowercase and 0 if not
 */
int _islower(int c)
{
	int n;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}
