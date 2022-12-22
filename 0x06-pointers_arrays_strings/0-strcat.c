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
	strcat(dest, src);
	

	return (dest);
}
