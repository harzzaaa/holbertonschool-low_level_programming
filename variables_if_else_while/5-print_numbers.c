#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints single digit numbers
 * Return: 0 to 9
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
