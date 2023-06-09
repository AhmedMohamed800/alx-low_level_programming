#include "main.h"

/**
* flip_bits - eturns the number of bits you would need to flip to get
* from one number to another.
* @n: number 1
* @m: number 2
* Return:  the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
		{
			count++;
		}
		diff >>= 1;
	}
	return (count);
}
