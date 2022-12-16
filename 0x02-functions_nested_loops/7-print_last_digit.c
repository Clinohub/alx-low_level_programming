#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * @last: the last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(ld + '0');

	return (0);
}
