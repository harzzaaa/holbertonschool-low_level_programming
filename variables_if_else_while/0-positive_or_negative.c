#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Print random number each time the script is executed
 * Return: response
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
