#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower case
 */

void print_alphabet(void)
{
	char la;

	la = 'a';
	while (la <= 'z')
	{
		_putchar(la);
		la++;
	}
	_putchar('\n');
}
