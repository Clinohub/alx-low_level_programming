#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */

int _strlen(char *s)
{

	int len = 0;

	s = "My first strlen!";

	for (len = 0; *s != '\0'; ++(*s))
		;

	return (len);

}
