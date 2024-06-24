#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14
 * Return: 0 to 14 repeated 10 times
*/

void more_numbers(void)
{
	int h, m;

	for (h = 0; h <= 9; h++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10 && m <= 14)
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
	_putchar ('\n');
	}
}
