#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14
 * Return: 0 to 14 repeated 10 times
*/

void more_numbers(void)
{
	int h, m;
	char new;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m <= 14; m++)
		{
			new = m + '0';
			if (m < 10 || h == 14)
				_putchar(new);
			if (m < 14)
				_putchar(' ');
		}
	_putchar('\n');
	}
}
