#include "main.h"
#include <stdio.h>

/**
 * main - prints Buzz each numbers
 * Return: 0 success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz";)
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
