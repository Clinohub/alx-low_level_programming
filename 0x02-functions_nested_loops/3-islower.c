#include "main.h"

/**
 * _islower - checks lowercase character
 * @c: the char
 * Return: lowercase =1 else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
