#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: the character to print
 * Return: 1 if successfully executed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
