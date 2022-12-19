#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to be whose value is swapped
 * to be swapped with that of int b
 * @b: integer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
