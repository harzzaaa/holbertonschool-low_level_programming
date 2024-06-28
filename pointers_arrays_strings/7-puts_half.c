#include "main.h"

/**
 * puts_half - fuction that print half of a string followed by a new line
 * @str: pointer that point to char
*/


void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	int si = (i + 1) / 2;

	while (str[si] != '\0')
	{
		_putchar(str[si]);
		si++;
	}
	_putchar('\n');
}
