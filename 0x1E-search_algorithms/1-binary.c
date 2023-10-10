#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array to search in
 * @size: the size of the array
 * @value: value to search for
 * Return: index of value or -1 on failuer
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t mid, i;

	if (size == 0 || array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			if (i == right)
				printf("%lu\n", i);
			else
				printf("%lu, ", i);
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
