#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: the size of memeory to print
  * @c: specific character
  * Return: pointer to the array, or NULL if size = 0
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
