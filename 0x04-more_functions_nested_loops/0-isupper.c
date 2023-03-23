#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: digit
* Return: 1 if c is uppercase or 0
*/
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
