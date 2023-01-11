#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: string
  * Return: pointer to the duplicated string else NULL
  */

char *_strdup(char *str)
{
	char *s;
	int a = 0;
	int i = 1;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i += 1;
	}

	s = (char *)malloc(i * (sizeof(char)) + 1);

	if (s == NULL)
		return (NULL);

	for (; a < i; a++)
		s[a] = str[a];

	s[a] = '\0';
	return (s);
}
