#include "main.h"
#include <unistd.h>
/**
 * print_triangle - print triangle
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	int num1, num2, num7;

	if (size <= 0)
	{
		_putchar('\n');
	}
	{
		for (num1 = 1; num1 <= size; num1++)
		{
			for (num2 = size - num1; num2 > 0; num2--)

			{
				_putchar(' ');
			}

			for (num7 = 0; num7 < num1; num7++)

			{
				_putchar('#');
			}
				_putchar('\n');

		}
	}
}
