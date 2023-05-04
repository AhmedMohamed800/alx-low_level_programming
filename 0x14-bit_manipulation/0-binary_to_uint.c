#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: b is pointing to a string of 0 and 1 chars
* Return: converted number
* or 0 if b = NULL or b isn't 0 and one's
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, size_of_b = 0, i;

	if (b == NULL)
		return (0);
	while (b[size_of_b] != '\0')
	{
		if (b[size_of_b] != '0' && b[size_of_b] != '1')
		{
			return (0);
		}
		size_of_b++;
	}
	for (i = 0; i < size_of_b; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}
	return (result);
}
