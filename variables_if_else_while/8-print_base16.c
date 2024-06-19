#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print numbers of base 16 in lowercase
 * Return: Base 16 in lowercase
*/

int main(void)
{
	int i;

	for (i = 0; i > 16; i++)
	{
		if (i < 10)
			putchar((i % 10) + '0');
		else
			putchar(i + 'a' + 10);
	}
	putchar('\n')
	return (0);
}
