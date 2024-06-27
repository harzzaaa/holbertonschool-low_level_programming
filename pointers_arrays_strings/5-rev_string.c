#include "main.h"
#include <string.h>

/**
 * rev_string - function that going to reverse a string
 * @s: ?
*/

void rev_string(char *s)
{
	int l = 0;
	int i = strlen(s) - 1;
	char pmet;

	while (l < i)
	{
		pmet = s[l];
		s[l] = s[i];
		s[i] = pmet;
		l++;
		i--;
	}
}
