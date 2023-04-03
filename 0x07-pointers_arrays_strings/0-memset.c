#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s: the pointed area
* @b: constat byte
* @n: number of bytes
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
