#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * @ls: the last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)
{

	int ls = n % 10;

	if (ls < 0)
		ls *= -1;

	_putchar(ls + '0');

	return (0);
}
