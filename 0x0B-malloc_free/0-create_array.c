#include "main.h"

/**
* create_array - creates an array of chars, and initializes it 
* with a specific char.
* @size: the size of the array
* @c: the start of the array
* Retunr: string
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
	{
		return ('\0');
	}
	arr = malloc(sizeof(arr) * size - 1);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
