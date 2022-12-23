#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements
 */

void reverse_array(int *a, int n)
{
	int *p, i, temp, j;

	p = a;

	for (i = 1; i < n; i++)

	{

		p++;

	}

	for (j = 0; j < i / 2; j++)

	{

		temp = a[j];

		a[j] = *p;

		*p = temp;

		p--;

	}

}
