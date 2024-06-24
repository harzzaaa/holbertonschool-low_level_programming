#include "main.h"

/**
 * _isdigit - Check for A digit.
 * c : Name used to refer _isdigit prototype
 * return: 1 if c is a digit otherwise 0
*/

int _isdigit(int c)
{
	if (c < 48 && c > 57)
		return (1);
	else
		return (0);
}
