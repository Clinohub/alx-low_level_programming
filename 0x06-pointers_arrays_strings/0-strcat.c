#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen += 1;
	}

	dest[dlen] = '\0';

	return (dest);
}
