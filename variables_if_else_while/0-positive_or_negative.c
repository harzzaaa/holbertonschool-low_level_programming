#include <stdio.h>
#include <time.h>

/**
 *main - Print random number each time the script is executed
 *Return: Always 0 Fam
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);
	return (0);
}
