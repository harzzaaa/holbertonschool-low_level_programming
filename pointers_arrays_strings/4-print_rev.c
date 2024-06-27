#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - function who prints in reverse
 *@s: string that is going to be printed
*/

void print_rev(char *s)
{
	int m, n;
	char chosepropre;
	int longueur = strlen(s);

	for (m = 0, n = longueur - 1; m < n; m++, n--)
		;

		{
			chosepropre = s[m];
			s[m] = s[n];
			s[n] = chosepropre;
		}
		while (*s)
		{
		_putchar(*s);
		s++;
		}
	_putchar('\n');
}

/**
 *main1 - test the print_rev function
 *Return: 0
*/

int main1(void)
{
	{
	char reversestring[] = "Reverse String For ?";

	printf("=%s\n", reversestring);

	print_rev(reversestring);

	printf("=%s\n", reversestring);

	}
	return (0);
}
