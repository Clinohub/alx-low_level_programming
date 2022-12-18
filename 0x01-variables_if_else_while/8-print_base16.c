#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char num_16;

	for (num_16 = '0'; num_16 <= '9'; num_16++)
		putchar(num_16);

	for (num_16 = 'a'; num_16 <= 'f'; num_16++)
		putchar(num_16);

	putchar('\n');

	return (0);
}
