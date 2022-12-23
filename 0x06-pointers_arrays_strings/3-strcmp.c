#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int alpha;

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	if (a <= b)
	{
		alpha = a;
	}

	else
		alpha = b;

	while (c <= alpha)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}

		c++;
	}

return (d);
}
