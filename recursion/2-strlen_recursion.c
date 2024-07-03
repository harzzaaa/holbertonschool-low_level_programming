#include "main.h"
#include <stdio.h>

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

/**
 *
 *
 *
*/
int strlen_recursion(void)
{
	char strl[] = "Corbin Coleman";

	printf("%d\n", _strlen_recursion(strl));

	return (0);
}
