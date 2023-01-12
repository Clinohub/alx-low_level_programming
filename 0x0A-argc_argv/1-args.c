#include <stdio.h>

/**
  * main - Prints the number of args
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	int argc1;

	argc1 = argc - 1;
	printf("%d\n", argc1);

	return (0);
}
