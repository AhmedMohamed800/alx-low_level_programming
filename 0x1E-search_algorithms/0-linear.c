#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * @array: array to search in
 * @size: the size of the array
 * @value: value to search for
 * Return: the index of the value or -1 on failuer
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t found = -1;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			break;
		}
	}
	return (found == 1 ? (i) : (found));
}
