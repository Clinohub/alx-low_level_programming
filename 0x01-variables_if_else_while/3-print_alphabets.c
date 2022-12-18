#include <stdio.h>
/**
 *  main - Entry point
 *  Return: 0 for success
 */

int main(void)
{
	char aLPHA;

	for (aLPHA = 'a'; aLPHA <= 'Z'; aLPHA++)
		putchar (aLPHA);

	for (aLPHA = 'A' ; aLPHA <= 'Z'; aLPHA++)
		putchar (aLPHA);

	putchar('\n');

	return (0);
}
