#include "main.h"

/**
 *puts2 : function that print every other character of the string
 *@str: pointer to char
 *@i: integer
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
		i++;
	}
	 _putchar('\n');
}
