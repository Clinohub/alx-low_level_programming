#include <stdlib.h>
#include "main.h"

/**
  * free_grid - frees a 2 dimensional grid
  * previously created by your alloc_grid
  * @grid: grid to be freed
  * @height: height of the grid
  * Return: 0
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
