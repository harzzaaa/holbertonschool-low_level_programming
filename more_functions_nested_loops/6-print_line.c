#include "main.h"

/**
 * print_line - Draw straight line
 * @num1: Times that the _ will be printed
*/

void print_line(int n)
{
	int num1;

	if (n > 0)
	{
		for (num1 = 0; num1 < n; num1++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
