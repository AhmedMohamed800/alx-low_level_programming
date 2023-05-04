#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: number
* @index: index
* Return: number after changes
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = 32, min = 0;

	if (index < min || index > max)
		return (-1);
	*n = (*n) | (1UL << index);
	return (1);
}
