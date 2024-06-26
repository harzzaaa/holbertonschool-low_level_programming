#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints last digits of Random number
 * Return: Last Digit
*/


int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digit of %d is %d and ", n, ld);
	if (ld > 5)
		printf("is greater than 5\n");
	else if (ld == 0)
		printf("is 0\n");
	else if (ld < 6 && ld != 0)
		printf("is less than 6 and not 0\n");
	return (0);
}
