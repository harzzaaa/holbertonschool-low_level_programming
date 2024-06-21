#include "main.h"

/**
 * _islower - check entry lowercase or not
 * @c : entry check
 * Return: a number
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
