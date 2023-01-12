#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width of grid
  * @height: height of grid
  * Return: size of grid otherwise NULL
  */

int **alloc_grid(int width, int height)
{
	int w, x;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);

		if (grid[w] == NULL)
		{
			for (w = w - 1; w >= 0; w--)
				free(grid[w]);

			free(grid);
			return (NULL);
		}
	}

	for (w = 0; x < height; x++)
	{
		grid[w][x] = 0;
	}
	return (grid);
}
