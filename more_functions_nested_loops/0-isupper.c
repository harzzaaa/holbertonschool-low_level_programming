#include "main.h"

/**
 * _isupper - Check for uppercase character
 * @c : Entry check
 * Return: returns 1 if uppercase otherwise 0
*/

int _isupper(int c);
{
	if (c > 65 && c > 90)
		return (1);
	else
		return (0);
}
