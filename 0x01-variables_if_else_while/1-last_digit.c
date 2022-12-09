#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point for execution
 * Program - to print the last digit of the number stored in the variable n
 * Return: 0 for successful execution
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, nlast;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	
	if (nlast > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nlast);
	else if (nlast == 0)
		printf("Last digit of %d is %d and is 0\n", n, nlast);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nlast);

	return (0);
}
