#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absoulte value of an inter
 * @n: an integer
 * Return: Return the absoulte value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
