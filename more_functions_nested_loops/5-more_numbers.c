#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
*/

void more_numbers(void)
{
	char morenumbers;

	while (0 < 10)
	for (morenumbers = 0; morenumbers <= 14; morenumbers++)
	{
		_putchar(morenumbers + '0');
	}
	if (morenumbers < 14)
	{
		_putchar(' ');
	}
	_putchar('\n');
}
