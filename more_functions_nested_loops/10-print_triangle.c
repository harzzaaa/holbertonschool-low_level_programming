#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	int num1, num2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = 0; num2 > num1; num2++)
			{
				_putchar('#');
			}
				_putchar('\n');

		}
	}
}
