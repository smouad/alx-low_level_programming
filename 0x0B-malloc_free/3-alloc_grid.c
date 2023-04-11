#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			for (j = 0; j <= i; j++)
				free(grid[j]);
			free(grid);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);

