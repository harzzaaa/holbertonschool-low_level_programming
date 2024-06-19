#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all
 * Return: Single digit
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		} else
			putchar('\n');
	}
	return (0);
}
