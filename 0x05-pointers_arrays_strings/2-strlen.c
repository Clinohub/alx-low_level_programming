#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */

int _strlen(char *s)
{

	int len;

	for (len = 0; str[len] != '\0'; str++)
		len++;

	return (len);

}
