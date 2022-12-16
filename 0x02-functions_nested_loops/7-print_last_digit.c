#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number argument
 * Return: value of the last digit
 */

int print_last_digit(int n)
{

	int ls = n % 10;

	if (ls < 0)
		ls = -ls;

	_putchar(ls + '0');

	return (n);
}
