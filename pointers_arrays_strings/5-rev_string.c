#include "main.h"
#include <string.h>

/**
 * rev_string - function that going to reverse a string
 * @s: ?
*/

void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char pmet;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (l < i)
	{
		pmet = s[l];
		s[l] = s[i];
		s[i] = pmet;
		l++;
		i--;
	}
}
