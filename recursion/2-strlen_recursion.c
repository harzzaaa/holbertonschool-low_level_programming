#include "main.h"

/**
 * _strlen_recursion - Function that return the lenght of a string
 *@s: ptr
 *Return: l so 0
*/

int _strlen_recursion(char *s)
{
	int l = 0;
	{
		while (s[l] != '\0')
			l++;
		return (l);
	}
}
