#include "main.h"

/**
 * helping - Search square root using rec'
 * @n: natural square root search
 * @i: value of square root
 * Return: Function
*/

int helping(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helping(n, i + 1));
}
/**
 * _sqrt_recursion - Send square root natural
 * @n: number that we search square root
 * Return: square root of n or -1 if does not exit
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helping(n, 0));
}
