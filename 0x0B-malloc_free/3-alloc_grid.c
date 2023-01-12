#include "main.h"

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

	grid = (int *)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);

		if (grid[w] == NULL)
		{
			w = w - 1;
			while (w >= 0)
			{
				free(grid[w]);
				w--;
			}

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
