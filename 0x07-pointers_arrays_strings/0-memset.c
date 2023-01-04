#include "main.h"

/**
* _memset - fills the memory area with constant bytes
* @s: a string
* @b: a character
* @n: bytes of memory area to fill
* Return: pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
