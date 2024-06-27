#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - function who prints in reverse
 *@s: string that is going to be printed
*/

void print_rev(char *s)
{
	int m;
	int longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur++;
	}

	for (m = longueur - 1; m >= 0; m--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
