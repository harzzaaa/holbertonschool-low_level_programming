#include "main.h"

/**
 * print_diagonal - Draw a diagonal
 * @n: times the \ will be printed
*/

void print_diagonal(int n)
{
	int num1, num7;

	if (n <= 0)
	{
		_putchar('\n');
	}
	{
		for (num1 = 0; num1 < n; num1++)
		{
			for (num7 = 0; num7 < num1; num7++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
