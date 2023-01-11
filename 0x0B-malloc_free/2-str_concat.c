#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - concatenates two strings
  * @s1: allocated space in memory
  * @s2: another allocated space in memory
  * Return: pointer to the allocated memory or NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		S2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	d = a + b;
	s = (char *)malloc((sizeof(char) * 1) + 1);
	b = 0;

	if (s == NULL)
		return (NULL);

	while (c < 1)
	{
		if (c <= a)
			s[c] = s1[c];

		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}
		c++;
	}

	s[c] = '\0';
	return (s);
}
