#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @cap: param
 * Return: cap
 */

char *cap_string(char *cap)
{

	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (cap[a])
	{
		i = 0;
		while (i < cspc)
		{
			if ((a == 0 || cap[a - 1] == spc[i]) && (cap[a] >= 97 && cap[a] <= 122))
				cap[a] -= 32;
			i++;
		}

		a++;
	}

return (cap);

}
