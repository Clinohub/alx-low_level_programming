#include<stdio.h>

/**
 * main - the entry point
 * Return: 0 for successful execution
 * The sizeof(variable)operator computes the size of a variable.
 * And, to print the result returned by sizeof,
 * we use either %lu or %zu format specifier.
 */

int main(void)
{

	int intType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	return (0);
}
