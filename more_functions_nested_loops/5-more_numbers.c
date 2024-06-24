#include "main.h"

/**
 *
 *
 *
*/

void more_numbers(void)
{
	int h, m;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 10)
			_putchar(m + '0');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
