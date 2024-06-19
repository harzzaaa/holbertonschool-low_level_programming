#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -
 * Return:
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
