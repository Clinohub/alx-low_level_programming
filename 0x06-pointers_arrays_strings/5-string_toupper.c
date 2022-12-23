#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @ptr: param
 * Return: ptr
*/

char *string_toupper(char *ptr)
{

		int a = 0;

		while (ptr[a])

		{

			if (ptr[a] >= 'a' && ptr[a] <= 'z')

			{

				ptr[a] -= 32;

			}

			a++;

		}

		return (ptr);
}
