#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: integer for rows
 * @height: integer for columns
 * Return: pointer to array or NUll
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	i = 0;
	j = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				for (j = 0; j < height; j++)
				{
					free(grid[j]);
				}
				free(grid);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
