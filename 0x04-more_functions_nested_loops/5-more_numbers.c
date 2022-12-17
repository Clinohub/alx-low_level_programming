#include "main.h"

/**
 *  * void more_numbers - prints 10 times the numbers
 *   */

void more_numbers(void)
{
	int a;
	int b;
	
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; y++)
		{
			if (b >= 10)
				_putchar((b / 10) + '0');
			else
				_putchar((b % 10)  + '0');
		}
		_putchar('\n');
	}
}
