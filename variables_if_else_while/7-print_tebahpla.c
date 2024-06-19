#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints Alphabet lowercase & reverse
 * Return: Reversed Alphabet in Lowercase
*/

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
