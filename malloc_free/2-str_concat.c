#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *str_concat - Function that concatenates 2 strings
 *@s1: 1st string
 *@s2: 2sd string
 *Return: program should return NULL if it's on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned n, m, len0, len7;

	if (s1 != NULL)
	{
		while (s1[len0] != '\0')
		len0++;
	}
	if (s2 != NULL)
	{
		while (s2[len7] != '\0')
		len7++;
	}

	concat = (char *)malloc((len0 + len7 + 1) * sizeof(char));
	if (concat == NULL)
	return (NULL);

	for (n = 0; n < len0; n++)
	concat[n] = s1[n];

	for (m = 0; m < len7; n++)
	concat[n] = s2[m];

	concat[n + m] = '\0';

	return (concat);
}

