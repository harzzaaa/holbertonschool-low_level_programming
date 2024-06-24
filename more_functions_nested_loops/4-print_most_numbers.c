#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9
 * Return: Print 0 to 9 but not 2 & 4
*/

void print_most_numbers(void)
{
	char numbers;
	{
		for (numbers = '0' ; numbers <= '9' ; numbers++)
			_putchar (numbers != '2' &&  numbers != '4');
	}
		_putchar('\n');

}
