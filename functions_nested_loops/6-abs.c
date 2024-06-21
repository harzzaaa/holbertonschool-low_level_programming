#include "main.h" 

/**
 * _abs - function that computes the absolute value of an integer
 * @num: input
 * Return: absolute value of input
*/

int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
