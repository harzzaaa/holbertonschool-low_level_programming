#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9
 * Return: Print 0 to 9 but not 2 & 4
*/

void print_most_numbers(void)
{
	char numbers;
	{
		for (numbers = 48; numbers <= 57; numbers++)
		if (numbers != 50 && numbers != 52)
			_putchar(numbers + '0');
	}
		_putchar('\n');

}
