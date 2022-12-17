#include "main.h"

/**
 * print_triangle - prints a triangl
 * @size: number of lines
 */

void print_triangle(int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 1; j < (size - 1); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar

