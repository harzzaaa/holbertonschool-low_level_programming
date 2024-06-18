#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints last digits Random Num
 * Return: Last number
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
		printf("Last digit of number %d \n", n);
	return (0);
}
