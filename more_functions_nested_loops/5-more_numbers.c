#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times from 0 to 14
 * Return: 0 to 14 repeated 10 times
*/

void more_numbers(void)
{
	int h, m;
	char newdigit;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m <= 14; m++)
		{
			printf("%d", m);
			if (m < 10)
			newdigit = m + '0';
			else
			newdigit = '1';

			_putchar(newdigit);

			if (m < 14)
			_putchar(' ');
		}
	_putchar('\n');
	}
}
