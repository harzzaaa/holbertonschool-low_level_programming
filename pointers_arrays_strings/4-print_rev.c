#include "main.h"

/**
 *print_rev - function who prints in reverse
 *@s: string that is going to be printed
*/

void print_rev(char *s)
{

	int l = 0;



	while (s[l] != '\0')
		{
	l++;
	}

	for (l -= 1; l >= 0; l--)
		{
		_putchar(s[l]);
	}
	_putchar('\n');
}
