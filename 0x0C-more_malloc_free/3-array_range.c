#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - creates an array of integers.
* @min: point of start.
* @max: point of end.
* Return: pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *arr, i, sum = max - min;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((sizeof(int) * sum) + sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (sum + 1); i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
