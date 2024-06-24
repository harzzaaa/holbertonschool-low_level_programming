#include "main.h"

/**
 * print_numbers - function who prints 0 to 9
 * Return: number 0 to 9
*/

void print_numbers(void)
{
	char numbers;
	{
		for (numbers = '0' ; numbers <= '9' ; numbers++)

			_putchar (numbers);
	}
	_putchar('\n');
}
