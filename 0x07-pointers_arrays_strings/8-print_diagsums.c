#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix
* @a: array
* @size: the size of array
*/
void print_diagsums(int *a, int size)
{
	int i, j, result_1 = 0, result_2 = 0, cont_loop = size - 1, counter = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				result_1 += a[counter];
			}
			if (j == cont_loop)
			{
				result_2 += a[counter];
			}
			counter++;
		}
		cont_loop--;
	}
	printf("%d, %d\n", result_1, result_2);
}
