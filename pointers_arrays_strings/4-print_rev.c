#include "main.h"

/**
 *print_rev - function who prints in reverse
 *@s: string that is going to be printed
*/

void print_rev(char *s)
{
	int m;
	int longueur = 0;

	for (m = 0; s[longueur] != '\0'; m++)
	{

	}

	for (m = longueur - 1; m >= 0; m--)
	{
		_putchar(s[longueur]);
	}
	_putchar('\n');
}
