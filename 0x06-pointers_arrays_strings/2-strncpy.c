#include "main.h"
#include <string.h>

/**
 * *_strncpy -  copies a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
