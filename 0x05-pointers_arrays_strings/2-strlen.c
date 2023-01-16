#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */

int _strlen(char *s)
{

	int len;
	int count = 0;

	for (len = 0; s[len] != '\0'; s++)
	{
		len++;
		count++;
	}
	return (count);

}
