#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
	count++;
	s++;
	}

	return (count);
}
