#include <stdio.h>
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
	int w = 0, x = 0, y = 0, z = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int *)malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (; w < height; w++)
	{
		ptr[w] = (int *)malloc(sizeof(int) * width);

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

	for (; y < height; y++)
	{
		for (; z < width; z++)
			ptr[y][z] = 0;
	}
	return (ptr);
}
