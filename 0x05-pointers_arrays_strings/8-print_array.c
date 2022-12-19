#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 *
 * @a: Array of integers
 *
 * @n: Number of elements of the array to be printed
 *
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar("%d", a[j]);

		if (j != (n - 1))
		{
			_putchar(", ");
		}
	}

	_putchar("\n");
}
