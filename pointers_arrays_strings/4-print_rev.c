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

	for (m = longueur - 1; m >= 0; longueur--)
	{
		printf("%c", s[m]);
	}
	printf("\n");
}

/**
 *main1 - test the print_rev function
 *Return: 0
*/

int main1(void)
{
	{
	char reversestring[] = "Reverse String For?";

	print_rev(reversestring);

	}
	return (0);
}
