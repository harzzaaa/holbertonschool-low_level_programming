#include "main.h"

/**
 *print_rev - function who prints in reverse
 *@s: string that is going to be printed
*/

void print_rev(char *s)
{
	int m;
	int l = 0;

	for (m = 0; s[l] != '\0'; m++)
	{

	}

	for (m = l - 1; m >= 0; m--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
