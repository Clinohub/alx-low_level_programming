#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *  : param
 * Return: a
*/

char *string_toupper(char *)
{

		int a = 0;

		while (a)

		{

			if (a >= 97 && a <= 122)

			{

				a -= 32;

			}

			a++;

		}

		return (a);
}
