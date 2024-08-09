#include "main.h"
#include <string.h>

/**
 * cap_string -
 * @i
 * @len
 *
*/

char *cap_string(char *s)
{
	/*char sep[] = " \t\n,;.!?\"(){}";*/
	char *ptr = s;
	int i = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' || s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		_putchar(*ptr);
	}
	return (s);
}
