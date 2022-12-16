#include "main.h"

/**
 * print_sign - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */

int print_sign (int n)
{

	int ls = n % 10;

	if (ls < 0)
		ls *= -1;

	_putchar(ls + '0');

	return (0);
}
