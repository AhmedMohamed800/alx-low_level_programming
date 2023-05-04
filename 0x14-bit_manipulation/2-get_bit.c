#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: number
* @index: the index
* Return: 0 or 1
*/ 
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index < i)
		return (-1);
	if (n & (1 << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
