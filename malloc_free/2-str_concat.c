#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Function that concatenates 2 strings
 *@s1: 1st string
 *@s2: 2sd string
 *Return: program should return NULL if it's on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len0 = 0, len7 = 0, n, m;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[len0])
		len0++;
	while (s2[len7])
		len7++;

	concat = malloc(len0 + len7 + 1);
	if (concat == NULL)
	return (NULL);

	for (n = 0; n < len0; n++)
	concat[n] = s1[n];

	for (m = 0; m < len7; m++)
	concat[n + m] = s2[m];

	concat[n + m] = '\0';

	return (concat);
}

