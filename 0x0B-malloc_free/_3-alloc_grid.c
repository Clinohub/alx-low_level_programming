/*Checker failed*/
#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: integers
  * @height: integers
  * Return: 0 0therwise NULL
  */

int **alloc_grid(int width, int height)
{
	int w, x, y, z;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		ptr[w] = malloc(sizeof(int) * width);

		if (ptr[w] == NULL)
		{
			x = w;
			while (x >= 0)
			{
				free(ptr[x]);
				w--;
			}

			free(ptr);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			ptr[y][z] = 0;
	}
	return (ptr);
}
