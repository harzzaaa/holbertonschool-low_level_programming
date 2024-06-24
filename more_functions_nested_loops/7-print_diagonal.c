#include "main.h"

/**
 * print_diagonal - Draw a diagonal
 * @n: times the \ will be printed
*/

void print_diagonal(int n)
{
	int num1;

	if (n > 0)
	{
		for (num1 = 0; num1 < n; num1++)
		{
			_putchar('\');
		}
	}
	_putchar('\n')
}
