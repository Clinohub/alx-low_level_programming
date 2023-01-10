#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  * Return: empty
  */

void print_triangle(int size)
{
	int i, j, k, sub;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			sub = size - i;

			for (j = sub; j > 1; j--)
			{
				_putchar(32);
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
