#include "main.h"

/**
 * print_sign - Prints if input = greater, equal, less or zero
 * @n: input
 * Return: 1, 0 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	return (-1);
	}
	return (2);
}
