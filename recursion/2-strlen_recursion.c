#include "main.h"

/**
 * _strlen_recursion - Function that return the lenght of a string
 *@s: ptr
 *Return: l so 0
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
