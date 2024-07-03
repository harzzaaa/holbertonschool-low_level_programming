#include "main.h"

/**
 * _pow_recursion - Function who returns value of x raised to power of y
 *@x: first value
 *@y: raised value
 *Return: if y less 0 then -1
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
