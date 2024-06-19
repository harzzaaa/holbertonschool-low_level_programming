#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints single digit number
 * Return: Numbers
*/

int digit(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
