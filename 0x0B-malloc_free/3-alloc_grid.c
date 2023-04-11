#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: the width of the matrix
* @height: the height of the matrix
* Return: pointer to 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
