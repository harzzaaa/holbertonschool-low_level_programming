#include "main.h"

/**
 * _isalpha - check input as alpha
 * @c: input to check
 * Return: 1 if input is alphabet or no
*/

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
