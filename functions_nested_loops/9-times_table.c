#include "main.h"

/**
 * times_table - Function prints 9 times tablet from 0
 * Return: times table
 *
*/

void times_table(void)
{
	int number, multiplier, result;

	for (number = 0; number <= 9; number++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			result = number * multiplier;

			if (multiplier == 0)
			_putchar(',');

			else if (result < 10 && multiplier != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
