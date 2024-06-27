#include "main.h"

/**
 *print_rev - function who prints in reverse
 *@s: string that is going to be printed
*/

void print_rev(char *s)
{
	int m;
	int l = 0;

	while (s[l] != '\0')
	{
	l++;
	}

	for (m = l - 1; m >= 0; m--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
int main1(void)
{
	char string[] = "Holberton!";
	{
	print_rev(string);
	}
	return 0;
}
