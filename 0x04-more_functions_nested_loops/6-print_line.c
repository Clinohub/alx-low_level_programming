#include "main.h"

/**
 *print_line - draws a straight line in the terminal.
 *@n:  is the number of times the character
 */

void print_line(int n)
{
	int i;

	if (i <= 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
			_putchar('_');

	_putchar('\n');
}
