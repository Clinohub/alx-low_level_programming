#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - function that concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (dest[len])
		len++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len] = src[j];
		len += 1;
	}

	dest[len] = '\0';

	return (dest);
}
