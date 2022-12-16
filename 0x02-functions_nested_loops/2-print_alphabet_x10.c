#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char la;

	for (i = 0; i <= 9; i++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar("\n");
	}
}
