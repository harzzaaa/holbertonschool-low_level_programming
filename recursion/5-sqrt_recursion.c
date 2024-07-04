#include "main.h"

/**
 * _sqrt_recursion - Function who returns natural square root of a number
 * @n: natural square root~
 * Return: Function
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	n++;
	return _sqrt_recursion(n, 1);
}
