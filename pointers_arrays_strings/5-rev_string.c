#include "main.h"
#include <string.h>
/**
 * rev_string - function that going to reverse a string
 * main - reverse a string
 * @s: ?
 * Return: 0
*/

void rev_string(char *s)
{
	int l = 0;
	int i = strlen(s) - 1;
	char pmet;

	while (l < i)
	{
		pmet = s[];
		s[] = s[];
		s[] = pmet;
		l++;
		i++;

	_putchar(s[l]);

	}

	_putchar('\n');
}
