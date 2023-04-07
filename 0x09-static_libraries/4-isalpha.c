#include <stdio.h>
#include "main.h"

/**
 * _isalpha - print if the input is a character or not
 * @c: input
 * Return: Return 1 if c is character and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);

}
