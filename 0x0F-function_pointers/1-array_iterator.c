#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_iterator -  executes a function given as a parameter on
* each element of an array.
* @array: an array.
* @size: array's size.
* @action: pointed function.
* Return: nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
