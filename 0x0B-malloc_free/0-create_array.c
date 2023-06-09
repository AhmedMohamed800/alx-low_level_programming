#include "main.h"

/**
* create_array - creates an array of chars, and initializes it
* with a specific char.
* @size: the size of the array
* @c: the start of the array
* Return: array of string
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (arr == NULL)
	{
		return (arr);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
