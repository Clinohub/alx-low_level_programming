#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints all the args content
  * @argc: argument count
  * @argv: argument vector
  * Return: Always zero
  */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
