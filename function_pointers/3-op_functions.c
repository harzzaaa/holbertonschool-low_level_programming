#include "3-calc.h"

/**
 * op_add - sum of a and b
 * @a: 1st int
 * @b: 2sd int
 * Return: rtrn a added to b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - rtrn dif of a and b
 * @a: 1st int
 * @b: 2sd int
 * Return: dif of a and b
*/


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - rtrn product of a and b
 * @a: 1st int
 * @b: 2sd int
 * Return: product a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - rtrn of div a and b
 * @a: 1st int
 * @b: 2sd int
 * Return: result of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * op_mod - rtrn remain of div a by b
 * @a: 1st int
 * @b: 2sd int
 * Return: remain of div a by b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
